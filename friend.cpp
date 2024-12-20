#include <iostream>
using namespace std;

class point
{
    friend void print(const point &);
    friend void scale(point &, const double &);

public:
    point(const double &_x, const double &_y) : x(_x), y(_y) {}

private:
    double x = 0, y = 0;
};

void print(const point &p)
{
    cout << '(' << p.x << ", " << p.y << ")\n";
}

void scale(point &p, const double &s)
{
    p.x *= s;
    p.y *= s;
}

int main()
{
    point p(1, 2);
    print(p); // (1, 2)
    scale(p, 5);
    print(p); // (5, 10)
}
