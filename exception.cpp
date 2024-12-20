// #include <iostream>
// #include <stdexcept>
// using namespace std;

// double invert(const double &x)
// {
//     if (x == 0)
//         throw invalid_argument("Division by zero!");
//     return 1.0 / x;
// }

// int main()
// {
//     try
//     {
//         cout << invert(10) << '\n';
//         cout << invert(0) << '\n';
//         cout << invert(20) << '\n';
//     }
//     catch (const invalid_argument &e)
//     {
//         cout << "Error: " << e.what() << '\n';
//     }
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// class triangle
// {
// public:
//     triangle(const double &_a, const double &_b, const double &_c)
//         : a(_a), b(_b), c(_c)
//     {
//         // double a = _a;
//         // double b = _b;
//         // double c = _c;
//         // cout << a << "," << b << "," << c << endl;
//         if ((a < 0) or (b < 0) or (c < 0))
//             throw invalid_argument("Sides cannot be negative!");
//         if ((a > b + c) or (b > c + a) or (c > a + b))
//             throw invalid_argument("Triangle inequality must be satisfied!");
//     }

//     void print()
//     {
//         cout << '(' << a << ", " << b << ", " << c << ")\n";
//     }

// private:
//     double a = 1, b = 1, c = 1;
// };

// int main()
// {
//     try
//     {
//         triangle t1(4, 2, 5);
//         t1.print();
//         triangle t2(6, -7, 8);
//         t2.print();
//         triangle t3(2, 2, 5);
//         t3.print();
//     }
//     catch (const invalid_argument &e)
//     {
//         cout << "Error: " << e.what() << '\n';
//     }
// }

#include <iostream>
#include <stdexcept>
using namespace std;

class triangle
{
public:
    triangle(const double &_a, const double &_b, const double &_c)
    {
        change_sides(_a, _b, _c);
    }

    void change_sides(const double &_a, const double &_b, const double &_c)
    {
        if ((_a < 0) or (_b < 0) or (_c < 0))
            throw invalid_argument("Sides cannot be negative!");
        if ((_a > _b + _c) or (_b > _c + _a) or (_c > _a + _b))
            throw invalid_argument("Triangle inequality must be satisfied!");
        a = _a;
        b = _b;
        c = _c;
    }

    void print()
    {
        cout << '(' << a << ", " << b << ", " << c << ")\n";
    }

private:
    double a = 0, b = 0, c = 0;
};

int main()
{
    triangle t(4, 2, 5);
    t.print();
    try
    {
        t.change_sides(4, 3, 5);
        t.change_sides(1, 3, 5);
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << '\n';
    }
    t.print();
}
