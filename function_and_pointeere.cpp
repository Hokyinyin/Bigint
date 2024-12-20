// #include <iostream>
// using namespace std;

// void swap(int64_t *const x, int64_t *const y)
// {
//     const int64_t temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int64_t a = 1, b = 2;
//     cout << "Before swap: a = " << a << ", b = " << b << '\n';
//     swap(&a, &b);
//     cout << "After swap: a = " << a << ", b = " << b << '\n';
// }

// #include <iostream>
// using namespace std;

// void swap(int64_t &x, int64_t &y)
// {
//     const int64_t temp = x;
//     x = y;
//     y = temp;
// }

// void swap(int64_t a, int64_t b)
// {
//     const int64_t temp = a;
//     a = b;
//     b = temp;
//     cout << "Inside the scope of swap " << "a = " << a << " and" << " b = " << b << '\n';
// }

// int main()
// {
//     int64_t a = 1, b = 2;
//     cout << &a << '\n';
//     cout << "Before swap: a = " << a << ", b = " << b << '\n';
//     swap(a, b);
//     cout << "After swap: a = " << a << ", b = " << b << '\n';
// }

#include <iostream>
using namespace std;

void print_plus_one(int64_t *x)
{
    cout << x << '\n';
    x++;
    cout << "print_plus_one: " << x << '\n';
}

int main()
{
    int64_t a = 1;
    cout << &a << '\n';
    print_plus_one(&a);            // Prints "print_plus_one: 2"
    cout << "main: " << a << '\n'; // Prints "main: 1"
}

// #include <iostream>
// using namespace std;

// void print_plus_one(int64_t &x)
// {
//     x++;
//     cout << "print_plus_one: " << x << '\n';
// }

// int main()
// {
//     int64_t a = 1;
//     print_plus_one(a);             // Prints "print_plus_one: 2"
//     cout << "main: " << a << '\n'; // Prints "main: 2"
// }
