// #include <iostream>
// using namespace std;

// void print_plus_one(int64_t x)
// {
//     x++;
//     cout << "print_plus_one: " << x << '\n';
// }

// int main()
// {
//     int64_t a = 1;
//     print_plus_one(a);             // Prints "print_plus_one: 2"
//     cout << "main: " << a << '\n'; // Prints "main: 1"
// }

#include <iostream>
using namespace std;

void print_plus_one(const int64_t x)
{
    cout << "print_plus_one: " << x + 1 << '\n';
}

int main()
{
    int64_t a = 1;
    print_plus_one(a);             // Prints "print_plus_one: 2"
    cout << "main: " << a << '\n'; // Prints "main: 1"
}
