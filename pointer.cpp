#include <iostream>
using namespace std;

int main()
{
    int64_t var = 0;     // Declare an integer var and initialize it to 0
    int64_t &ref = var;  // Declare a reference ref and initialize it to be an alias of var
    int64_t *ptr = &var; // Declare a pointer ptr and initialize it to the address of var
    cout << "Initialization: "
         << "var = " << var << ", ptr = " << ptr << ", *ptr = " << *ptr << ", ref = " << ref << ".\n";
    var++;
    cout << "var++:          "
         << "var = " << var << ", ptr = " << ptr << ", *ptr = " << *ptr << ", ref = " << ref << ".\n";
    ref++;
    cout << "ref++:          "
         << "var = " << var << ", ptr = " << ptr << ", *ptr = " << *ptr << ", ref = " << ref << ".\n";
    (*ptr)++;
    cout << "(*ptr)++:       "
         << "var = " << var << ", ptr = " << ptr << ", *ptr = " << *ptr << ", ref = " << ref << ".\n";
    ptr++; // Warning: This increases the address ptr points to, NOT the value at the address!
    cout << "ptr++:          "
         << "var = " << var << ", ptr = " << ptr << ", *ptr = " << *ptr << ", ref = " << ref << ".\n";
}
