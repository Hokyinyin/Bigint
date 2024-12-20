#include <iostream>
using namespace std;

uint32_t str_to_int(const std::string str)
{
    uint8_t i = 0;
    uint32_t sum = 0;
    while (i < str.size())
    {
        sum = (str[i] - '0') + sum * 10;
        i++;
    }
    return sum;
}

void xyz(const string &str_digits)
{
    string str = "";
    for (int64_t i = (str_digits.size() - 1); i >= 0; i -= 4)
    {
        int64_t j = i - 3;
        if (j < 0)
            j = 0;
        while (j <= i)
        {
            str.push_back(str_digits[j]);
            j++;
        }
        cout << str << endl;
        str.clear();
    }
}

int main()
{
    string x = "12344";
    xyz(x);
    // std::cout << (str_to_int(x)) << std::endl;
}
