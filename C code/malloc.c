#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const uint64_t size = 1000;
    int64_t *array = malloc(size * sizeof(*array));
    // printf("%" PRId64 " \n", array);
    printf("%p \n", array);
    // printf("%" PRId64 " \n", *array);
    // printf("%" PRId64 " \n", *(array + 1));
    // printf("%" PRId64 " \n", *(array + 2));
    for (int16_t i = 0; i < 1000; i++)
    {
        printf("The %" PRId16 " item is: %" PRId64 " \n", i, *(array + i));
    }
    if (array == NULL)
    {
        printf("Failed to allocate memory!\n");
        return -1;
    }
    printf("Successfully allocated memory for an array of %llu elements of %zu bytes each at address %p using malloc.\n", size, sizeof(*array), (void *)array);
    printf("First element (uninitialized): %" PRId64 ".\n", array[0]);
    free(array);
}
