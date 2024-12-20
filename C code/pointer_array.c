// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// void print_array_2D(const char name[const], const uint64_t the_array[3][2])
// {
//     for (uint64_t i = 0; i < 3; i++)
//         for (uint64_t j = 0; j < 2; j++)
//             printf("%s[%" PRIu64 "][%" PRIu64 "] = %" PRIu64 " (%p)\n", name, i, j, the_array[i][j], (void *)&the_array[i][j]);
// }

// int main(void)
// {
//     const uint64_t matrix[3][2] = {{1, 2},
//                                    {3, 4},
//                                    {5, 6}};
//     print_array_2D("matrix", matrix);
// }

#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

void print_array_2D(const char *const name, const uint64_t *const the_array, const uint64_t rows, const uint64_t cols)
{

    for (uint64_t i = 0; i < rows; i++)
        for (uint64_t j = 0; j < cols; j++)
        {
            printf("the pointer: %p \n", the_array + 2 * i + j);
            printf("%s[%" PRIu64 "][%" PRIu64 "] = %" PRIu64 " (%p)\n", name, i, j, the_array[cols * i + j], (void *)&the_array[cols * i + j]);
        }
}

int main(void)
{
    const uint64_t matrix[3][2] = {{1, 2},
                                   {3, 4},
                                   {5, 6}};
    print_array_2D("matrix", (uint64_t *)matrix, 3, 2);
}
