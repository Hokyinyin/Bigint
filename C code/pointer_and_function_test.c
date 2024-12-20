// the input arguments in the function will be stored as new local variable within the function scope.

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// void swap(int64_t x, int64_t y)
// {
//     const int64_t temp = x;
//     x = y;
//     y = temp;
// }

// int main(void)
// {
//     int32_t a = 1, b = 2;
//     printf("Before swap: a = %" PRId32 ", b = %" PRId32 "\n", a, b);
//     swap(a, b);
//     printf("After swap:  a = %" PRId32 ", b = %" PRId32 "\n", a, b);
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int swap(int64_t x, int64_t y)
// {
//     const int64_t temp = x;
//     x = y;
//     printf("%p \n", &x);
//     printf("%p \n", &y);
//     y = temp;
//     return y;
// }

// int main(void)
// {
//     int64_t a = 1, b = 2;
//     printf("%p \n", &a);
//     printf("%p \n", &b);
//     printf("Before swap: a = %" PRId64 ", b = %" PRId64 "\n", a, b);
//     swap(a, b);
//     printf("After swap:  a = %" PRId64 ", b = %" PRId64 "\n", a, b);
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// void swap(int64_t *const x, int64_t *const y)
// {
//     const int64_t temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main(void)
// {
//     int64_t a = 1, b = 2;
//     printf("Before swap: a = %" PRId64 ", b = %" PRId64 "\n", a, b);
//     swap(&a, &b);
//     printf("After swap:  a = %" PRId64 ", b = %" PRId64 "\n", a, b);
// }

// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     const int32_t a[] = {2, 3, 5};
//     printf("Value: %p \n", a);
//     printf("First element:  address %p, value %d\n", (void *)a, *a);
//     printf("Second element: address %p, value %d\n", (void *)(a + 1), *(a + 1));
//     printf("Third element:  address %p, value %d\n", (void *)(a + 2), *(a + 2));
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// void swap(int64_t *const x, int64_t *const y)
// {
//     const int64_t temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main(void)
// {
//     int64_t a = 1, b = 2;
//     printf("Before swap: a = %" PRId64 ", b = %" PRId64 "\n", a, b);
//     swap(&a, &b);
//     printf("After swap:  a = %" PRId64 ", b = %" PRId64 "\n", a, b);
// }

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

void print_array(const char name[const], const uint64_t size, const uint64_t the_array[const]) // type name[const] = type * const name
{
    printf("%" PRId64 " \n", *(the_array + 1));
    for (uint64_t i = 0; i < size; i++)
    {
        printf("%s[%" PRIu64 "] = %2" PRIu64 " (%p)\n", name, i, the_array[i], (void *)&the_array[i]);
        printf("the character: %c (%p) \n", *(name + i), name + i);
    }
}

int main(void)
{
    const uint64_t primes[] = {2, 3, 5, 7, 11};
    print_array("primes", 5, primes);
}

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// void print_array_2D(const char name[const], const uint64_t the_array[3][2])
// {
//     for (int8_t i = 0; i < 3; i++)
//         for (int8_t j = 0; j < 2; j++)
//             printf("name: %s has the value of %" PRId32 " (%p) \n", name, the_array[i][j], the_array[i][j]);
// }

// void test(const int64_t *pointer)
// {
//     printf("pointer test: %p \n", pointer + 1);
//     printf("pointer test: %p \n", pointer + 2);
//     printf("pointer test: %p \n", pointer + 3);
//     printf("pointer test: %p \n", pointer + 4);
//     printf("pointer test: %p \n", pointer + 5);
// }

// int main(void)
// {
//     const uint64_t matrix[3][2] = {{1, 2},
//                                    {3, 4},
//                                    {5, 6}};
//     // printf("pointer in decimal : %" PRId64 " \n", matrix);
//     // test(matrix);
//     print_array_2D("matrix", matrix);
// }
