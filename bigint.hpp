/**
 * @file bigint.hpp
 * @author Hok Yin Wong (wongh76@mcmaster.ca)
 * @brief bigint: a class that store and operate arbitrary-precision integers to perform scientific calculation.
 * @version 0.1
 * @date 2024-12-20
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

/**
 * @brief define bigint class.
 *
 *
 */
class bigint
{

    /**
     * @brief Two private members: API and is_negative
     * API is the short term of arbitary precision integer
     * API is a vector of 32 bits unsigned integer. The element is the four digits extracted from the number.
     * is_negative is the sign of the integer. When the integer is positve, is_negative is false. Vice versa.
     */
private:
    std::vector<uint32_t> API;
    bool is_negative = false;

    /**
     * @brief
     *
     */
public:
    // constructor
    bigint();                              // default constructor
    bigint(const int64_t num);             // constructor taking 64bit unsigned integer
    bigint(const std::string &str_digits); // constructor taking a string of digits

    // friend functions
    friend bool is_larger(const bigint &var1, const bigint &var2);
    friend bigint addition(const bigint &x, const bigint &y);
    friend bigint subtraction(const bigint &x, const bigint &y);
    friend std::ostream &operator<<(std::ostream &out, const bigint &var);
    friend bigint multiplication(const bigint &x, const bigint &y);
    friend uint32_t str_to_int(const std::string str);

    // arithmatic operator
    bigint &operator+=(const bigint &var);
    bigint operator+(const bigint &var);
    bigint &operator-=(const bigint &var);
    bigint operator-(const bigint &var);
    bigint &operator*=(const bigint &var);
    bigint operator*(const bigint &var);

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

/**
 * @brief
 *
 * @param var
 */

uint32_t str_to_int(const std::string str)
{
    uint8_t i = 0;
    uint32_t sum = 0;
    while (i < str.size())
    {
        sum = static_cast<uint32_t>(str[i] - '0') + sum * 10;
        i++;
    }
    return sum;
}

bigint::bigint()
{
    API.push_back(0);
    if (API.empty())
        throw std::invalid_argument("Fail to construct bigint object"); // Confirm the default constructor is properly built
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
        API.push_back(static_cast<uint32_t>(num % 10000));
        num = num / 10000;
    }
    if (API.empty())
        throw std::invalid_argument("Fail to construct bigint object"); // Confirm the constructor is not empty
}

bigint::bigint(const std::string &str_digits)
{
    if (str_digits.empty())
        throw std::invalid_argument("The input string can not be empty");
    uint8_t index_start = 0;
    if (str_digits[0] == '-')
    {
        is_negative = true;
        index_start = 1;
    }
    if (str_digits[0] == '+')
    {
        is_negative = false;
        index_start = 1;
    }
    for (uint64_t i = index_start; i < str_digits.size(); i++)
        if (!isdigit(str_digits[i]))
            throw std::invalid_argument("Failed because the input contains non-integer character.");
    std::string str_4digits = "";
    for (int64_t i = (static_cast<int64_t>(str_digits.size()) - 1); i >= index_start; i -= 4)
    {
        int64_t j = i - 3;
        if (j < 0 && index_start == 0)
            j = 0;
        if (j <= 0 && index_start == 1)
            j = 1;
        while (j <= i)
        {
            str_4digits.push_back((str_digits[static_cast<uint64_t>(j)]));
            j++;
        }
        API.push_back(str_to_int(str_4digits));
        str_4digits.clear();
    }
    if (API.empty())
        throw std::invalid_argument("Fail to construct bigint object"); // Confirm the constructor is not empty
}

std::ostream &operator<<(std::ostream &out, const bigint &var)
{
    if (var.API.front() == 0 and var.API.size() == 1)
        return out << 0;
    if (var.is_negative == true)
        out << '-';
    out << var.API.back();
    // std::cout << "term:" << var.API.back() << "\n";
    for (uint64_t i = 0; i < (var.API.size() - 1); i++)
    {
        out << std::setw(4) << std::setfill('0') << var.API[var.API.size() - 2 - i];
    }
    return out;
}

bool is_larger(const bigint &x, const bigint &y) // return true if x is larger or equal to var2
{
    if (x.API.size() != y.API.size())
    {
        if (x.API.size() > y.API.size())
        {
            return true;
        }
        else
            return false;
    }
    for (uint64_t i = 0; i < x.API.size(); i++)
    {
        if (x.API[x.API.size() - 1 - i] < y.API[y.API.size() - 1 - i])
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
    uint64_t sum = 0;
    for (uint64_t i = 0; i < result.API.size(); i++)
    {
        if (i < x.API.size())
        {
            sum += x.API[i];
        }
        if (i < y.API.size())
        {
            sum += y.API[i];
        }
        result.API[i] = sum % 10000;
        sum = sum / 10000;
    }
    if (sum != 0)
        result.API.push_back(sum % 10000);
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
    int64_t sum = 0;
    for (uint64_t i = 0; i < result.API.size(); i++)
    {
        if (i < x.API.size())
            sum += x.API[i];
        if (i < y.API.size())
            sum -= y.API[i];
        if (sum >= 0)
        {
            result.API[i] = static_cast<uint32_t>(sum % 10000);
            sum = sum / 10000;
        }
        else
        {
            sum += 10000;
            result.API[i] = static_cast<uint32_t>(sum % 10000);
            sum = -1;
        }
    }
    while (result.API.back() == 0 && result.API.size() > 1)
        result.API.pop_back();
    return result;
}

bigint multiplication(const bigint &x, const bigint &y)
{
    bigint result;
    result.API.clear();
    for (uint64_t i = 0; i < (x.API.size() + y.API.size()); i++)
        result.API.push_back(0);

    uint64_t sum = 0;
    for (uint64_t i = 0; i < x.API.size(); i++)
    {
        for (uint64_t j = 0; j < y.API.size(); j++)
        {
            sum = result.API[i + j] + (x.API[i] * y.API[j]);
            result.API[i + j] = sum % 10000;
            result.API[i + j + 1] += sum / 10000; // process the carry value to the next digit
            if ((i + j + 1) > result.API.size())
                throw std::invalid_argument("Out of range error");
        }
    }
    while (result.API.back() == 0 && result.API.size() > 1)
        result.API.pop_back();
    return result;
}

bigint &bigint::operator+=(const bigint &var)
{
    bool temp = is_negative;
    if (is_negative == var.is_negative)
    {
        *this = addition(*this, var);
        is_negative = temp;
    }
    else
    {
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
    bool temp;
    if (is_negative == var.is_negative)
    {
        if (is_larger(*this, var))
            temp = is_negative;
        else
            temp = !is_negative;
        *this = subtraction(*this, var);
        is_negative = temp;
    }
    else
    {
        temp = is_negative;
        *this = addition(*this, var);
        is_negative = temp;
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
    bool temp;
    if (is_negative != var.is_negative)
        temp = true;
    else
        temp = false;
    *this = multiplication(*this, var);
    is_negative = temp;

    return *this;
}

bigint bigint::operator*(const bigint &var)
{
    bigint result = *this;
    return result *= var;
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
    if (is_negative != var.is_negative) // When two signs are not the same, the value of is_negative is opposite to the expected output
        return !is_negative;
    if (*this == var) // when two variables are equalivent,
        return true;
    if (is_negative)
        return !is_larger(*this, var); // if both variables are negative number, the larger value of *this means it is smaller than var
    return is_larger(*this, var);      // if both variables are positive number, the larger value of *this means it is bigger than var
}

bool bigint::operator>(const bigint &var)
{
    if (*this >= var and *this != var)
        return true;
    return false;
}

bool bigint::operator<=(const bigint &var)
{
    if (is_negative != var.is_negative) // When two signs are not the same, the value of is_negative is opposite to the expected output
        return is_negative;
    if (*this == var) // when two variables are equalivent,
        return false;
    if (is_negative)
        return is_larger(*this, var); // if both variables are negative number, the larger value of *this means it is smaller than var
    return !is_larger(*this, var);    // if both variables are positive number, the larger value of *this means it is bigger than var
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
    if (*this == 0 or *this == -0)
    {
        result.is_negative = false;
    }
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
