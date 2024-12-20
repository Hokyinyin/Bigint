#include <iostream>
using namespace std;

int main()
{
    cout << true << '\n' // 1
         << boolalpha
         << true << '\n' // true
         << noboolalpha << '\n';

    cout << 2 << ", " << -2 << '\n' // 2, -2
         << showpos
         << 2 << ", " << -2 << '\n' // +2, -2
         << noshowpos << '\n';

    cout << 2.0 << ", " << 2.1 << '\n' // 2, 2.1
         << showpoint
         << 2.0 << ", " << 2.1 << '\n' // 2.00000, 2.10000
         << noshowpoint << '\n';

    cout << 1234.56 << '\n' // 1234.56
         << fixed
         << 1234.56 << '\n' // 1234.560000
         << scientific
         << 1234.56 << '\n' // 1.234560e+03
         << uppercase
         << 1234.56 << '\n' // 1.234560E+03
         << nouppercase << defaultfloat << '\n';

    cout << 1.23456789 << '\n';
    cout.precision(5);
    cout << 1.23456789 << '\n'; // 1.2346
    cout.precision(10);
    cout << 1.23456789 << '\n'; // 1.23456789
    cout.precision(20);
    cout << 1.23456789 << '\n'; // 1.2345678899999998901
    cout.precision(6);
    cout << '\n';

    cout << 255 << '\n' // 255
         << hex
         << 255 << '\n' // ff
         << uppercase
         << 255 << '\n' // FF
         << nouppercase << dec << '\n';

    cout << "| ";
    cout << 123 << " |" << '\n'; // | 123 |
    cout << "| ";
    cout.width(10);
    cout << 123 << " |" << '\n'; // |        123 |
    cout << "| ";
    cout << left;
    cout.width(10);
    cout << 123 << " |" << '\n' // | 123        |
         << right << '\n';
}

//:: means we are accessing an object in a namespace
// namespace is a scope that we define function or variable
// class is a customized definition of an object