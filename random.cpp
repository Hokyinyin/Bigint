// #include <iostream>
// #include <random>
// using namespace std;

// int main()
// {
//     random_device rd;
//     cout << "rd.entropy() = " << rd.entropy() << '\n';
//     cout << "rd.min() = " << rd.min() << '\n';
//     cout << "rd.max() = " << rd.max() << '\n';
//     cout << "3 random numbers: " << rd() << ", " << rd() << ", " << rd() << '\n';
// }

#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;

    mt19937 mt32(rd());
    cout << "mt32.min() = " << mt32.min() << '\n';
    cout << "mt32.max() = " << mt32.max() << '\n';
    cout << "3 random numbers: " << mt32() << ", " << mt32() << ", " << mt32() << '\n'
         << '\n';

    mt19937_64 mt64(rd());
    cout << "mt64.min() = " << mt64.min() << '\n';
    cout << "mt64.max() = " << mt64.max() << '\n';
    cout << "3 random numbers: " << mt64() << ", " << mt64() << ", " << mt64() << '\n';
}
