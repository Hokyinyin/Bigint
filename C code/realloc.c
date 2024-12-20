#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const uint64_t size1 = 1000, size2 = 100, size3 = 10000;
    int64_t *array1 = NULL, *array2 = NULL, *array3 = NULL;

    array1 = malloc(size1 * sizeof(*array1));
    if (array1 == NULL)
    {
        printf("Failed to allocate memory!\n");
        return -1;
    }
    printf("Successfully allocated memory for an array of %llu elements of %lu bytes each at address %p using malloc.\n", size1, sizeof(*array1), array1);

    array2 = realloc(array1, size2 * sizeof(*array2));
    if (array2 == NULL)
    {
        printf("Failed to reallocate memory!\n");
        free(array1);
        return -1;
    }
    printf("Successfully reallocated memory for an array of %llu elements of %lu bytes each at address %p using realloc.\n", size2, sizeof(*array2), (void *)array2);

    array3 = realloc(array2, size3 * sizeof(*array3));
    if (array3 == NULL)
    {
        printf("Failed to reallocate memory!\n");
        free(array2);
        return -1;
    }
    printf("Successfully reallocated memory for an array of %llu elements of %lu bytes each at address %p using realloc.\n", size3, sizeof(*array3), (void *)array3);

    free(array3);
    printf("%lu \n", sizeof(array1));
    printf("%lu \n", sizeof(array2));
    printf("%lu \n", sizeof(array3));
}
