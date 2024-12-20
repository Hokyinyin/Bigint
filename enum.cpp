// #include <iostream>
// using namespace std;

// enum color
// {
//     red,
//     green,
//     blue
// };

// int main()
// {
//     cout << red << "\n";
//     cout << green << "\n";
//     cout << blue << "\n";
//     color c = red;           // Note that red is in the global scope, causing potential collisions.
//     int x = c;               // Works; enum is implicitly converted to an int.
//     cout << x + red << endl; // Also works; can add int and color, which doesn't make sense. Prints 0.
// }

// #include <iostream>
// using namespace std;

// enum class color
// {
//     red,
//     green,
//     blue
// };

// int main()
// {
//     color c = color::red; // Note that red is in the color:: scope, not the global scope.
//     // int x = c;              // Error: a value of type "color" cannot be used to initialize an entity of type "int".
//     // cout << x + color::red; // Error: cannot add an int and a color.
// }

// 5.3.8 Reading and writing binary files is not needed in the project
// may not need derive and inheritance class