#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream input("main.cpp");
    if (!input.is_open())
    {
        cout << "Error opening file!";
        return -1;
    }

    char c;
    while (input.get(c))
        cout << c;

    input.close();
}
