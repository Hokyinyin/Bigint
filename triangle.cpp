#include <cmath>
#include <iostream>
#include <stdexcept>
#include "triangle.hpp"
using namespace std;

triangle::triangle()
{
    change_sides(0, 0, 0);
}

triangle::triangle(const double &_a)
{
    change_sides(_a, _a, _a);
}

triangle::triangle(const double &_a, const double &_b)
{
    change_sides(_a, _b, sqrt(_a * _a + _b * _b));
}

triangle::triangle(const double &_a, const double &_b, const double &_c)
{
    change_sides(_a, _b, _c);
}

void triangle::change_sides(const double &_a, const double &_b, const double &_c)
{
    if ((_a < 0) or (_b < 0) or (_c < 0))
        throw invalid_argument("Sides cannot be negative!");
    if ((_a > _b + _c) or (_b > _c + _a) or (_c > _a + _b))
        throw invalid_argument("Triangle inequality must be satisfied!");
    a = _a;
    b = _b;
    c = _c;
}

void triangle::print()
{
    cout << '(' << a << ", " << b << ", " << c << ")\n";
}
