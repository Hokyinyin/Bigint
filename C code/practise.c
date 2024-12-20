// Q1

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     int64_t x = 5;
//     int64_t y = 6;
//     printf("5 * 6 = %" PRId64 \n" ", x * y);
// }

// Q2
// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     const int64_t x = -100;
//     // x++;
//     printf("%" PRId64 "\n", x);
// }

// Q3

// #include <stdio.h>
// #include <stdint.h>
// #include <inttypes.h>

// int main(void)
// {
//     uint32_t x = 3000000000;
//     printf("%" PRIu32 "", x + 1);
// }

// Q4
// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     int64_t a = 1;
//     int64_t b = (a == 2) ? 3 : 4;
//     int64_t c;
//     if (b == 3)
//         c = 5;
//     else
//         c = 6;
//     int64_t d = 7;
//     switch (c)
//     {
//     case 5:
//         d = 8;
//     case 7:
//         d = 9;
//     case 6:
//         d = 10;
//     case 8:
//         d = 11;
//     }
//     printf("%" PRId64 " %" PRId64 " %" PRId64 " %" PRId64 " \n", a, b, c, d);
// }

// Q5
//  #include <inttypes.h>
//  #include <stdint.h>
//  #include <stdio.h>

// const int64_t x = 256;
// const int64_t y = 512;

// void swap()
// {
//     // int64_t temp = x;
//     // x = y;
//     // y = temp;
//     const int64_t *px = &x;
//     const int64_t *py = &y;
//     int64_t *temp = py;
//     py = px;
//     px = temp;
//     printf("x is %" PRId64 ",y is %" PRId64 " \n", *px, *py);
// }

// int main(void)
// {
//     int64_t x = 1024;
//     int64_t y = 2048;
//     swap();
//     printf("x = %" PRId64 ", y = %" PRId64, x, y);
// }

// Q6
// #include <stdio.h>
// #include <stdint.h>
// #include <inttypes.h>

// int64_t int_power(const int64_t a, const int64_t b)
// {
//     int64_t value = 1;
//     for (int64_t i = 0; i < b; i++)
//         value *= a;
//     return value;
// }

// int main(void)
// {
//     // int64_t k = int_power(2, 2);
//     // printf("%" PRId64 " \n", k);
//     printf("%" PRId64 " \n", int_power(2, 4));
// }

// Q8
// #include <stdio.h>
// #include <stdint.h>
// #include <inttypes.h>

// int main(void)
// {
//     const double arr[] = {6.4, 3.0, -23.3, 5349.2, -311.1, 10.5};
//     int8_t length = sizeof(arr) / sizeof(arr[0]);
//     double max = arr[0];
//     double min = arr[0];
//     for (int8_t i = 0; i < length; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//         if (arr[i] < min)
//             min = arr[i];
//     }
//     printf("maximum is: %e \n", max);
//     printf("minimum is: %e \n", min);
// }

#include <stdio.h>

int main(void)
{
    const double d = 1.23456789;
    printf("%12.2f\n", d);
    printf("%12.4f\n", d);
    printf("%10.7f\n", d);
    printf("%12.8f\n", d);
    printf("%12.10f\n", d);
    printf("%e \n", d);
}
