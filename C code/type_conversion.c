// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//      const int64_t x = 3.6; // The data type should be double, however we assign it to integer so the number in the decimal place are thrown away.
//     printf("%" PRId64 "\n", x);
// }

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const int64_t x = 5, y = 3;
    // // Integer division truncates towards zero, so 5/3 will be truncated to 1.
    // printf("Integer division:   x / y = %" PRId64 "\n", x / y);
    // // Generates a warning and does not print the correct result, since we are trying to format an integer as a floating-point number.
    // printf("No casting:         x / y = %f\n", x / y);
    // Generates a warning, but does print the correct result since x is cast to double.
    printf("Casting x:          x / y = %f\n", (double)x / y);
    // Same as the last one, but this time we cast y to double, with the same effect.
    printf("Casting y:          x / y = %f\n", x / (double)y);
    // To avoid the warning, we must cast both integers to double.
    printf("Casting both:       x / y = %f\n", (double)x / (double)y);
}
