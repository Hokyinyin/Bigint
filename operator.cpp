// ostream stands for output stream. It is a class. ostrema& means the return value is a reference of a stream object
//

#include "vector_overloads.hpp"
#include <stdexcept>

vector<double> operator+=(vector<double> &lhs, const vector<double> &rhs)
{
    if (lhs.size() != rhs.size())
        throw invalid_argument("Cannot add vectors of different sizes!");
    for (size_t i = 0; i < lhs.size(); ++i)
        lhs[i] += rhs[i];
    return lhs;
}

vector<double> operator+(vector<double> lhs, const vector<double> &rhs)
{
    lhs += rhs;
    return lhs;
}

int main()
{
    try
    {
        vector<double> a = {1, 2, 3};
        const vector<double> b = {4, 5, 6};
        const vector<double> c = {7, 8, 9};
        const vector<double> d = {1, 2, 3, 4};
        a += b;
        cout << a << '\n';         // (5, 7, 9)
        cout << b + c << '\n';     // (11, 13, 15)
        cout << a + b + c << '\n'; // (16, 20, 24)
        cout << a + d << '\n';     // Error: Cannot add vectors of different sizes!
    }
    catch (const invalid_argument &e)
    {
        cout << "Error: " << e.what() << '\n';
    }
}
