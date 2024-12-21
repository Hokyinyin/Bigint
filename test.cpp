#include "bigint.hpp"
#include <iostream>

/**
 * @brief test program for bigint
 * Definee three variables a,b,c. c is to confirm the program can catch the error
 * @return int
 */
int main()
{
    // Define variables for the test. We can modify them to test the program.
    int64_t a = 100;
    std::string b = "100000000000";
    std::string c = "afe343421";

    try
    {
        // Test the default constructor.
        bigint A;
        std::cout << "The default constructor is successfully constructed: " << A << "\n";
        bigint B(0);
        std::cout << "The default constructor is successfully constructed: " << B << "\n";
        std::cout << "\n";

        // Test the int64_t constructor.
        bigint C(a);
        std::cout << "The value of the input integer: " << a << "\n";
        std::cout << "The value of the constructed bigint variable: " << C << "\n";
        std::cout << "\n";

        // Test the string constructor.
        bigint D(b);
        std::cout << "The value of the input variable: " << b << "\n";
        std::cout << "The value of the constructed bigint variable: " << D << "\n";
        std::cout << "\n";

        // Test the aritmatic operator
        std::cout << C << " + " << D << " = " << (C + D) << "\n";   // Addition
        std::cout << C << " - " << D << " = " << (C - D) << "\n";   // Subtraction
        std::cout << C << " * " << D << " = " << (C * D) << "\n";   // Multiplication
        std::cout << C << " -= " << D << " = " << (C -= D) << "\n"; // Subtraction
        std::cout << C << " *= " << D << " = " << (C *= D) << "\n"; // Multiplication
        std::cout << C << " += " << D << " = " << (C += D) << "\n"; // Addition
        std::cout << "\n";

        // Test the comparison operator
        std::cout << C << " == " << D << " is " << std::boolalpha << (C == D) << "\n";
        std::cout << C << " != " << D << " is " << std::boolalpha << (C != D) << "\n";
        std::cout << C << " >= " << D << " is " << std::boolalpha << (C >= D) << "\n";
        std::cout << C << " <= " << D << " is " << std::boolalpha << (C <= D) << "\n";
        std::cout << C << " > " << D << " is " << std::boolalpha << (C > D) << "\n";
        std::cout << C << " < " << D << " is " << std::boolalpha << (C < D) << "\n";
        std::cout << "\n";

        // Test the unary operator
        std::cout << "The negation of " << C << " is " << (-C) << "\n";
        std::cout << "Pre-increment of " << C << " is " << (++C) << "\n";
        std::cout << "Post-increment of " << C << " is " << (C++) << "\n";
        std::cout << "After the post-increment: " << C << "\n";
        std::cout << "Pre-decrement of " << C << " is " << (--C) << "\n";
        std::cout << "Post-decrement of " << C << " is " << (C--) << "\n";
        std::cout << "After the post-decrement: " << C << "\n";
        std::cout << "\n";

        /**
         * @brief Define c to test if the program can catch the error. c is a invalid input.
         *
         */
        bigint E(c);
    }
    catch (const std::invalid_argument &e)
    {
        std::cout << "Error: " << e.what() << '\n';
        std::cout << "\n";
    }
}
