// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     const int64_t x = 0;
//     if (x = 1) // if there are only one  =, it is not comparison, it is assigning value to xß
//         printf("x is true.\n");
//     else
//         printf("x is false.\n");
// }

// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", 1 == 1);
//     printf("%d\n", 1 == 2);
// }

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

// int main(void)
// {
//     int64_t x = 7;
//     if (x = 0)
//         printf("%" PRId64 " is divisible by 3.\n", x);
//     else if (x  = 1)
//         printf("%" PRId64 " divided by 3 has remainder 2.\n", x);
//     else if (x = 2)
//         printf("%" PRId64 " divided by 3 has remainder 2.\n", x);
// }

// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", 1 == 1);
//     printf("%d\n", 1 == 2);
// }

#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int64_t x = 0;
    if (x = 0) // Notice that we (incorrectly) used = instead of == here!
        printf("x is 1.\n");
    else
        printf("x is not 1.\n");
}
