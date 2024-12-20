#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t factorial(uint64_t n)
{
    uint64_t value_n = 1;
    for (uint64_t i = 0; i < n; i++)
    {
        value_n = value_n * (1 + i);
    }
    return value_n;
}

int main(void)
{
    printf("%" PRIu64 " \n", factorial(5));
}