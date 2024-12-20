#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const char filename[] = "squares.txt";
    const uint64_t num_squares = 100;
    FILE *file_ptr = NULL;

    file_ptr = fopen(filename, "w");
    if (file_ptr == NULL)
    {
        perror("Cannot open file");
        return -1;
    }

    for (uint64_t i = 1; i <= num_squares; i++)
    {
        if (fprintf(file_ptr, "%" PRIu64 "\n", i * i) < 0)
        {
            perror("Error occurred");
            fclose(file_ptr);
            return -1;
        }
    }

    printf("Squares of all numbers from 1 to %" PRIu64 " written successfully to file %s.\n", num_squares, filename);
    fclose(file_ptr);
}
