#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password = "1234";
    string input;
    cout << "Enter password: ";
    cin >> input;
    if (input == password)
        cout << "Password is correct.\n";
    else
        cout << "Password is incorrect.\n";
}
