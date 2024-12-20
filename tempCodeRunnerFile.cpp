#include <iostream>
constexpr int square(int x)
{
    return x * x;
}

int main()
{
    constexpr int value = square(5); // Compile-time computation
    std::cout << "Square of 5 is " << value << '\n';
    return 0;
}