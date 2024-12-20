#include <iostream>
#include <vector>

class bigint
{
private:
    std::vector<uint32_t> API; // arbitary precision integer API
    bool is_negative = false;

public:
    bigint();                              // default constructor
    bigint(const int64_t num);             // constructor taking 64bit unsigned integer
    bigint(const std::string &str_digits); // constructor taking a string of digits

    // member functions
    friend bool is_larger(const bigint &var1, const bigint &var2);

    // friend functions
    // friend bigint addition(bigint x, bigint y);
    // friend bigint subtraction(bigint &x, bigint &y);
    // test//
    friend bigint addition(const bigint &x, const bigint &y);
    friend bigint subtraction(const bigint &x, const bigint &y);
    friend std::ostream &operator<<(std::ostream &out, const bigint &var);
    friend bigint multiplication(const bigint &x, const bigint &y);

    // arithmatic operator
    bigint &operator+=(const bigint &var);
    bigint &operator-=(const bigint &var);
    bigint operator+(const bigint &var);
    bigint operator-(const bigint &var);
    bigint &operator*=(const bigint &var);
    bigint &operator*(const bigint &var);
    // comparison operator
    bool operator==(const bigint &var);
    bool operator!=(const bigint &var);
    bool operator>=(const bigint &var);
    bool operator<=(const bigint &var);
    bool operator>(const bigint &var);
    bool operator<(const bigint &var);
    // unary operator
    bigint operator-();
    bigint &operator++();
    bigint &operator--();
    bigint operator++(int);
    bigint operator--(int);
};

bigint::bigint()
{
    API.push_back(0);
}

bigint::bigint(int64_t num)
{
    if (num == 0)
        API.push_back(0);
    if (num < 0)
    {
        num = -num;
        is_negative = true;
    }
    while (num > 0)
    {
        API.push_back(num % 10);
        num = num / 10;
    }
}
bigint::bigint(const std::string &str_digits)
{
    // uint8_t counter = 0;
    if (str_digits[0] == '-')
    {
        is_negative = true;
    }
    for (uint64_t i = 0; i < (str_digits.size() - is_negative); i++)
    {
        // API.push_back(i - '0');
        API.push_back(str_digits[str_digits.size() - 1 - i] - '0');
    }
}

bool is_larger(const bigint &var1, const bigint &var2) // to compare var1 is larger than var2
{
    if (var1.API.size() != var2.API.size())
    {
        if (var1.API.size() > var2.API.size())
        {
            return true;
        }
        else
            return false;
    }
    for (uint64_t i = 0; i < var1.API.size(); i++)
    {
        if (var1.API[var1.API.size() - 1 - i] < var2.API[var2.API.size() - 1 - i])
            return false;
    }
    return true;
}

bigint addition(const bigint &x, const bigint &y)
{
    bigint result;
    result.API.clear();
    if (is_larger(x, y) == false)
        return addition(y, x);
    for (uint64_t i = 0; i < x.API.size(); i++)
        result.API.push_back(0);
    uint8_t sum = 0;
    for (uint64_t i = 0; i < result.API.size(); i++)
    {
        if (i < x.API.size())
            sum += x.API[i];
        if (i < y.API.size())
            sum += y.API[i];
        result.API[i] = sum % 10;
        sum = sum / 10;
    }
    if (sum != 0)
        result.API.push_back(sum % 10);
    return result;
}

bigint subtraction(const bigint &x, const bigint &y)
{
    bigint result;
    result.API.clear();
    if (is_larger(x, y) == false)
        return subtraction(y, x);
    for (uint64_t i = 0; i < x.API.size(); i++)
        result.API.push_back(0);
    int8_t sum = 0;
    for (uint64_t i = 0; i < result.API.size(); i++)
    {
        if (i < x.API.size())
            sum += x.API[i];
        if (i < y.API.size())
            sum -= y.API[i];
        if (sum >= 0)
        {
            result.API[i] = sum % 10;
            sum = sum / 10;
        }
        else
        {
            sum += 10;
            result.API[i] = sum % 10;
            sum = -1;
        }
    }
    while (result.API.back() == 0 && result.API.size() > 1)
    {
        result.API.pop_back();
    }
    return result;
}

bigint multiplication(const bigint &x, const bigint &y)
{
    bigint result;
    {
        for (uint64_t i = 0; i < (x.API.size() + y.API.size()); i++)
            result.API.push_back(0);
    }

    uint8_t sum = 0;
    for (uint64_t i = 0; i < x.API.size(); i++)
    {
        for (uint64_t j = 0; j < y.API.size(); j++)
        {
            sum = result.API[i + j] + (x.API[i] * y.API[j]);
            result.API[i + j] = sum % 10000;
            result.API[i + j + 1] += sum / 10000; // process the carry value to the next digit
        }
    }
    return result;
}

std::ostream &operator<<(std::ostream &out, const bigint &var)
{
    if (var.is_negative == true)
        out << '-';
    for (uint64_t i = 0; i < var.API.size(); i++)
    {
        out << var.API[var.API.size() - 1 - i];
    }
    return out;
}

bigint &bigint::operator+=(const bigint &var)
{
    if (is_negative == var.is_negative)
    {
        *this = addition(*this, var);
    }
    else
    {
        bool temp = is_negative;
        if (is_larger(*this, var) == false)
            temp = var.is_negative;
        *this = subtraction(*this, var);
        is_negative = temp;
    }
    return *this;
}

bigint bigint::operator+(const bigint &var)
{
    bigint result = *this;
    return result += var;
}

bigint &bigint::operator-=(const bigint &var)
{
    if (is_negative == var.is_negative)
    {
        *this = subtraction(*this, var);
    }
    else
    {
        *this = addition(*this, var);
    }
    return *this;
}

bigint bigint::operator-(const bigint &var)
{
    bigint result = *this;
    return result -= var;
}

bigint &bigint::operator*=(const bigint &var)
{
    if (is_negative != var.is_negative)
        is_negative = !is_negative;
    *this = multiplication(*this, var);
    return *this;
}

bigint &bigint::operator*(const bigint &var)
{
    return *this *= var;
}

// boolean operator
bool bigint::operator==(const bigint &var)
{
    if ((API.size() != var.API.size()) or (is_negative != var.is_negative))
        return false;
    for (uint64_t i = 0; i < API.size(); i++)
    {
        if (API[i] != var.API[i])
            return false;
    }
    return true;
}

bool bigint::operator!=(const bigint &var)
{
    return !((*this) == var);
}
bool bigint::operator>=(const bigint &var)
{
    if (is_larger(*this, var) == true)
        return true;
    else
        return false;
}
bool bigint::operator>(const bigint &var)
{
    if (*this >= var and *this != var)
        return true;
    return false;
}
bool bigint::operator<=(const bigint &var)
{
    if (is_larger(var, *this) == true)
        return true;
    else
        return false;
}
bool bigint::operator<(const bigint &var)
{
    if (*this <= var and *this != var)
        return true;
    return false;
}

bigint bigint::operator-()
{
    bigint result = *this;
    result.is_negative = !is_negative;
    return result;
}
bigint &bigint::operator--()
{
    *this -= 1;
    return *this;
}
bigint bigint::operator--(int)
{
    bigint temp = *this;
    *this -= 1;
    return temp;
}

bigint &bigint::operator++()
{
    *this += 1; // 1 is treated as bigint automatically
    return *this;
}
bigint bigint::operator++(int)
{
    bigint temp = *this;
    *this += 1;
    return temp;
}
