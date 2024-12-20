#include <iostream>
#include "bigint.hpp"
using namespace std;

// void is_larger_test()
// {
//     bigint y(12345);
//     bigint z("10000000000000000000000000000000000000000000000000000000000000000000000");
//     cout << is_larger(y, z) << "\n";
// }

// int main()
// {
//     bigint y(123);
//     bigint z("-1000000000");
//     cout << z << endl;
//     cout << y << endl;
//     cout << subtraction(z, y) << endl;
//     cout << y + z << "\n";
// }

int main()
{
    bigint a(0);
    bigint b("-1220000000000");
    bigint c("100000000000000000000000000000");
    // print(a);

    // cout << "\n";
    // print(a);
    // cout << "\n";
    // print(c);

    cout << "\n";
    cout << a * b << endl;

    cout << "\n";
    cout << (c -= b) << endl;
}
