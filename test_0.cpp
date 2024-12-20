#include <iostream>
#include "bigint_0.hpp"

void default_constructor_test()
{
    bigint test;
    std::cout << "Test the default constructor: ";
    if (bigint(0) == test)
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}
void int64_constructor_test(const bigint &var)
{
    std::cout << "Test the int64_t constructor: ";
    if (bigint(123) == var)
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}
void string_constructor_test(const bigint &var)
{
    std::cout << "Test the string constructor: ";
    if (bigint("123456") == var)
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}
void addition_test(const bigint &var1, const bigint &var2)
{
    std::cout << "Test the addition function: ";
    if (addition(var1, var2) == bigint(888))
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}

void multiplication_test(const bigint &var1, const bigint &var2)
{
    std::cout << "Test the muliplication function: ";
    if (multiplication(var1, var2) == bigint(94095))
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}
void subtraction_test(const bigint &var1, const bigint &var2)
{
    std::cout << "Test the subtraction function: ";
    if (subtraction(var1, var2) == bigint(642))
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}
// void output_test(const bigint &var)
// {

// }

void smaller_and_equal_test(bigint &var1, const bigint &var2)
{
    std::cout << "Test the < and <= function: ";
    if ((var1 < var2) && (var1 <= var2 && var1 <= var1))
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}

void bigger_and_equal(bigint &var1, const bigint &var2)
{
    std::cout << "Test the > and >= function: ";
    if ((var1 > var2) && (var1 >= var2 && var1 >= var1))
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}

void equal_test(bigint &var)
{
    std::cout << "Test the == function: ";
    if (var == var)
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}

void not_equal_test(bigint &var1, const bigint &var2)
{
    std::cout << "Test the != function: ";
    if (var1 != var2)
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}

void negation_test(bigint &var1, bigint &var2)
{
    std::cout << "Test the negation function: ";
    if (-var1 == var2)
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}
void pre_increment_test(bigint var1, bigint var2)
{
    std::cout << "Test the pre-increment function: ";
    if (++var1 == var2)
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}
void post_increment_test(bigint var1, bigint var2)
{
    std::cout << "Test the post-increment function: ";
    bigint original_value = var1;
    if (var1++ == original_value)
    {
        if (var1 == var2)
            std::cout << "PASS" << "\n";
    }
    else
        std::cout << "FAIL" << "\n";
}

void pre_decrement_test(bigint var1, bigint var2)
{
    std::cout << "Test the pre-decrement function: ";
    if (--var1 == var2)
        std::cout << "PASS" << "\n";
    else
        std::cout << "FAIL" << "\n";
}

void post_decrement_test(bigint var1, bigint var2)
{
    std::cout << "Test the post-decrement function: ";
    bigint original_value = var1;
    if (var1-- == original_value)
    {
        if (var1 == var2)
            std::cout << "PASS" << "\n";
    }
    else
        std::cout << "FAIL" << "\n";
}

int main()
{
    bigint a(123);
    bigint b(765);
    bigint c("123456");
    bigint d(-123);
    bigint e(124);
    bigint f(123);
    // unit test for the constructor
    std::cout << "\n"
              << "unit test for the constructor" << "\n";
    default_constructor_test();
    int64_constructor_test(a);
    string_constructor_test(c);

    // unit test for the arithmetic operator
    std::cout << "\n"
              << "Unit test for the arithmetic operator" << "\n";
    addition_test(a, b);
    subtraction_test(a, b);
    multiplication_test(a, b);

    // unit test for the comparison operator
    std::cout << "\n"
              << "Unit test for the comparison operator" << "\n";
    smaller_and_equal_test(a, b);
    bigger_and_equal(b, a);
    equal_test(a);
    not_equal_test(a, b);

    // unit test for the unary operator
    std::cout << "\n"
              << "Unit test for the unary operator" << "\n";
    negation_test(a, d);
    pre_increment_test(a, e);
    post_increment_test(a, e);
    pre_decrement_test(e, a);
    post_decrement_test(e, a);
}
