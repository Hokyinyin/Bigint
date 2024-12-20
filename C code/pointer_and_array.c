// #include <stdio.h>
// #include <stdint.h>

// int main(void)
// {
//     int16_t arr[4] = {0, 1, 2, 3};
//     printf("The address: %p \n", arr + 1);
// }

// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     int32_t var1 = 2;
//     int32_t var2 = 3;
//     int32_t var3 = 5;
//     const int32_t a[] = {2, 3, 5};
//     printf("First element:  address %p, value %d\n", (void *)a, *a);
//     printf("Second element: address %p, value %d\n", (void *)(a + 1), *(a + 1));
//     printf("Third element:  address %p, value %d\n", (void *)(a + 2), *(a + 2));

//     printf("The address of var1: %p \n", &var1);
//     printf("The address of var2: %p \n", &var2);
//     printf("The address of var3: %p \n", &var3);
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// void print_array(const char name[const], const uint64_t size, const uint64_t the_array[const])
// {
//     printf("The pointer: %p \n", the_array + 4);
//     for (uint64_t i = 0; i < size; i++)
//         printf("%s[%" PRIu64 "] = %2" PRIu64 " (%p)\n", name, i, *(the_array + i), &the_array[i]); // %s treat th enext argument as string
// }

// int main(void)
// {
//     const uint64_t primes[] = {2, 3, 5, 7, 11};
//     char name[] = "different name";
//     printf("The size of the name: %ld \n", sizeof(name[0]));
//     printf("%p \n", name);
//     printf("The size of the array: %lu \n", sizeof(primes));
//     printf("The size of the array: %lu \n", sizeof(primes[0]));
//     print_array(name, 5, primes);
// }

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

void print_array_2D(const char name[const], const uint64_t the_array[const 3][2])
{
    for (uint64_t i = 0; i < 3; i++)
        for (uint64_t j = 0; j < 2; j++)
            printf("%s[%" PRIu64 "][%" PRIu64 "] = %" PRIu64 " (%p)\n", name, i, j, the_array[i][j], (the_array + i) + j);
}

int main(void)
{
    const uint64_t matrix[3][2] = {{1, 2},
                                   {3, 4},
                                   {5, 6}};
    printf("the address is: %p \n", matrix);
    print_array_2D("matrix", matrix);
}
