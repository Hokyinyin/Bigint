#include <iostream>
using namespace std;

void test(int64_t &var)
{
    var += 1;
}

int main()
{
    int64_t var = 10;
    // int64_t &ref = var;
    // cout << &ref << endl;
    // ref += 1;
    // cout << ref << endl;
    test(var);
    cout << var << endl;
}