#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const int8_t var_int8_t = 0;
    const int16_t var_int16_t = 0;
    const int32_t var_int32_t = 0;
    const int64_t var_int64_t = 0;
    const long double var_long_double = 0;
    const double var_double = 0;
    const float var_float = 0;

    printf("sizeof(var_int8_t)      = %2zu, &var_int8_t      = %p\n", sizeof(var_int8_t), &var_int8_t);           // %zu is used to print out the result of sizeof
    printf("sizeof(var_int16_t)     = %2zu, &var_int16_t     = %p\n", sizeof(var_int16_t), (void *)&var_int16_t); // sizeof return the the size in byte
    printf("sizeof(var_int32_t)     = %2zu, &var_int32_t     = %p\n", sizeof(var_int32_t), (void *)&var_int32_t);
    printf("sizeof(var_int64_t)     = %2zu, &var_int64_t     = %p\n", sizeof(var_int64_t), (void *)&var_int64_t);
    printf("sizeof(var_long_double) = %2zu, &var_long_double = %p\n", sizeof(var_long_double), (void *)&var_long_double);
    printf("sizeof(var_double)      = %2zu, &var_double      = %p\n", sizeof(var_double), (void *)&var_double);
    printf("sizeof(var_float)       = %2zu, &var_float       = %p\n", sizeof(var_float), (void *)&var_float);
}
