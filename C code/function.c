// #include <stdio.h>
// #include <stdint.h>
// #include <inttypes.h>
// int32_t add(int8_t x, int8_t y)
// {
//     return x + y;
// }

// int main(void)
// {
//     printf("The value is: %" PRId32 " \n", add(1, 2));
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int32_t increment(int64_t x)
// {
//     x++;
//     printf("increment(): x = %" PRId64 "\n", x);
//     return x;
// }

// int main(void)
// {
//     int64_t x = 0;
//     int32_t y = increment(x);
//     printf("y is: %" PRId32 " \n", y);
//     printf("main():      x = %" PRId64 "\n", x);
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int32_t add();

// int main(void)
// {
//     printf("The result is %" PRId32 " \n", add(1, 2));
// }

// int32_t add(const int x, const int y)
// {
//     return x + y;
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int64_t add(); // The initial declaration is called prototype

// int main(void)
// {
//     printf("%" PRId64 "\n", add(5, 6));
// }

// int64_t add(const int64_t a, const int64_t b)
// {
//     return a + b;
// }

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

bool is_odd();

bool is_even(const int64_t n)
{
    if (n > 0)
        return is_odd(n - 1);
    else if (n < 0)
        return is_odd(n + 1);
    else
        return true;
}

bool is_odd(const int64_t n)
{
    if (n > 0)
        return is_even(n - 1);
    else if (n < 0)
        return is_even(n + 1);
    else
        return false;
}

int main(void)
{
    const int64_t n = 7;
    printf("%" PRId64 " is %s", n, is_even(n) ? "even" : "odd");
}
