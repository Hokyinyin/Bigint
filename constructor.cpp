// #include <iostream>
// using namespace std;

// class point
// {
// public:
//     // Default constructor: coordinates are initialized to their default values as specified below
//     point() {}
//     // Constructor with one argument: assumes the argument is the value of both x and y
//     point(const double &_xy) : x(_xy), y(_xy) {}
//     // point(const double &_xy)
//     // {
//     //     double x = _xy;
//     //     double y = _xy;
//     // }
//     // Constructor with two arguments
//     point(const double &_x, const double &_y) : x(_x), y(_y) {}

//     // Prints the coordinates of the point as a tuple
//     void print()
//     {
//         cout << '(' << x << ", " << y << ")\n";
//     }

//     // Scales both coordinates by the specified amount
//     void scale(const double &s)
//     {
//         x *= s;
//         y *= s;
//     }

//     double x = 0, y = 0;
// };

// int main()
// {
//     point p1;       // Uses default constructor
//     p1.print();     // (0, 0)
//     point p2(5);    // Uses constructor with one argument
//     p2.print();     // (5, 5)
//     point p3(8, 7); // Uses constructor with two arguments
//     p3.print();     // (6, 7)
// }

// Constructor is a member function with the same name as class
// must be public, since the user needs to access them as part of the class interface in order to initialize objects.
// no return value.
// arguments are the input used to initialize the object.

// #include <iostream>
// using namespace std;

// double invert(const double &x)
// {
//     cout << &x << '\n';
//     return 1.0 / x;
// }

// int main()
// {
//     // double x = 10;
//     // invert(x);
//     cout << invert(10) << '\n'; // Prints "0.1"
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// class triangle
// {
// public:
//     triangle(const double &_a, const double &_b, const double &_c)
//     {
//         change_sides(_a, _b, _c);
//     }

//     void change_sides(const double &_a, const double &_b, const double &_c)
//     {
//         if ((_a < 0) or (_b < 0) or (_c < 0))
//             throw invalid_argument("Sides cannot be negative!");
//         if ((_a > _b + _c) or (_b > _c + _a) or (_c > _a + _b))
//             throw invalid_argument("Triangle inequality must be satisfied!");
//         a = _a;
//         b = _b;
//         c = _c;
//     }

//     void print()
//     {
//         cout << '(' << a << ", " << b << ", " << c << ")\n";
//     }

// private:
//     double a = 0, b = 0, c = 0;
// };

// int main()
// {
//     triangle t(4, 2, 5);
//     t.print();
//     try
//     {
//         t.change_sides(4, 3, 5);
//         t.change_sides(1, 3, 5);
//     }
//     catch (const invalid_argument &e)
//     {
//         cout << "Error: " << e.what() << '\n';
//     }
//     t.print();
// }
#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
public:
    triangle() {}
    triangle(const double &_a, const double &_b, const double &_c)
    {
        change_sides(_a, _b, _c);
    }
    triangle(const double &_a)
    {
        change_sides(_a, _a, _a);
    }
    triangle(const double &_a, const double &_b)
    {
        change_sides(_a, _b, pythagorean(_a, _b));
    }
    double pythagorean(const double &_a, const double &_b)
    {
        return sqrt(pow(_a, 2) + pow(_b, 2));
    }
    void change_sides(const double &_a, const double &_b, const double &_c)
    {
        if ((_a <= 0) or (_b <= 0) or (_c <= 0))
            throw invalid_argument("Sides cannot be negative");
        if ((_a > _b + _c) or (_b > _c + _a) or (_c > _a + _b))
            throw invalid_argument("Triangle inequality must be satisfied!");
        a = _a;
        b = _b;
        c = _c;
    }
    void print()
    {
        cout << a << "," << b << "," << c << endl;
    }

private:
    double a = 0, b = 0, c = 0;
};

int main()
{
    try
    {
        triangle degenerate_triangle;
        degenerate_triangle.print();
        triangle equilateral_triangle(1);
        equilateral_triangle.print();
        triangle right_triangle(3, 4);
        right_triangle.print();
        triangle arbitrary_triangle(5, 6, 7);
        arbitrary_triangle.print();
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << endl;
    }
}

// invlaid_argument is a class. invalid_argument("Text") could be the constructor, .what() is the member function