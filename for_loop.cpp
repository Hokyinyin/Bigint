// #include <iostream>
// using namespace std;

// int main()
// {
//     const uint64_t primes[] = {2, 3, 5, 7, 11};

//     for (const uint64_t p : primes) //p is a local variable in the for loop, it is a local copy of the elements in the arr
//         cout << p << '\n';
// }

// int main()
// {
//     uint64_t arr[] = {1, 2, 3, 4, 5};

//     // for (uint8_t i = 0; i < 5; i++)
//     //     cout << arr[i] << '\n';
//     for (uint64_t i : arr)
//         cout << i << '\n';
// }

#include <iostream>
using namespace std;

int main()
{
    constexpr uint64_t primes[] = {2, 3, 5, 7, 11};

    for (uint64_t p : primes) // p is the copy of each elements in the array
    {
        p++;
        cout << p << '\n';
    }

    for (const uint64_t &p : primes) // p is the reference of each
        cout << p << '\n';
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     uint64_t primes[] = {2, 3, 5, 7, 11};

//     for (uint64_t &p : primes)
//     {
//         p++;
//         cout << p << '\n';
//     }

//     for (const uint64_t &p : primes)
//         cout << p << '\n';
// }
