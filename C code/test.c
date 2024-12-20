#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    for (uint64_t i = 1; i <= 10; i++)
        printf("%" PRIu64 " ", i); // Place a breakpoint here
}
