// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     const uint64_t primes[] = {2, 3, 5, 7, 11};
//     int32_t arr[10] = {0};
//     printf("The array is: %" PRId32 "\n", arr[1]);
//     for (uint64_t i = 0; i < 5; i++)
//         printf("primes[%" PRIu64 "] = %" PRIu64 "\n", i, primes[i]);
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     const int64_t nums[1] = {0};
//     for (int64_t i = -1; i <= 1; i++)
//         printf("nums[%" PRId64 "] = %" PRId64 "\n", i, nums[i]);
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// // int main(void)
// // {
// //     int16_t arr[5] = {0};
// //     for (uint8_t i = 0; i < 5; i++) // Define the 1D array, analogus to vector
// //         printf("The array is: %" PRId16 " \n", arr[i]);
// // }

// int main(void)
// {
//     int16_t arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     for (uint8_t i = 0; i < 3; i++)
//         for (uint8_t j = 0; j < 4; j++)
//             printf("The array: %" PRId16 " \n", arr[i][j]);
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     const uint8_t primes[] = {2, 3, 5, 7, 11};
//     // for (uint64_t i = 0; i < 5; i++)
//     //     printf("primes[%" PRIu64 "] = %" PRId8 " \n", i, primes[i]);
//     printf("The size of the array: %lu \n", sizeof(primes));
//     printf("The size of an element in the array: %lu \n", sizeof(primes[0]));
// }

#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const int32_t a[] = {2, 3, 5};
    printf("First element:  address %p, value %d\n", (void *)a, *a);
    printf("Second element: address %p, value %d\n", (void *)(a + 1), *(a + 1));
    printf("Third element:  address %p, value %d\n", (void *)(a + 2), *(a + 2));
}
