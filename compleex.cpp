#include <complex>
#include <iostream>
using namespace std;
using namespace complex_literals;

int main()
{
    complex<double> c = 1.0 + 2.0i;
    cout << c << '\n';                               // (1,2)
    cout << (c + 3.0 + 4.0i) * (5.0 + 6.0i) << '\n'; // (-16,54)
}
