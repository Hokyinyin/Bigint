#include <iostream>
using namespace std;

void print_type(const uint64_t x)
{
    cout << "I got a 64-bit integer: " << x << '\n';
}

void print_type(const void *const x)
{
    cout << "I got a pointer: " << x << '\n';
}

int main()
{
    int64_t *p = nullptr;
    cout << p << '\n';
    print_type(nullptr);
}
