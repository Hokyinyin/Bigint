#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const char filename[] = "data.csv";
    int num_read = 0;
    FILE *file_ptr = NULL;
    int64_t x = 0, y = 0, z = 0;
    uint64_t line = 1;

    file_ptr = fopen(filename, "r");
    if (file_ptr == NULL)
    {
        perror("Cannot open file");
        return -1;
    }

    do
    {
        num_read = fscanf(file_ptr, "%" PRId64 ",%" PRId64 ",%" PRId64, &x, &y, &z);
        if (num_read == 3)
            printf("Read values: (%" PRId64 ", %" PRId64 ", %" PRId64 ") on line %" PRIu64 ". Sum is %" PRId64 ".\n", x, y, z, line, x + y + z);
        else
        {
            printf("Error: Encountered invalid data on line %" PRIu64 "!\n", line);
            break;
        }
        line++;
    } while (!feof(file_ptr));

    if (feof(file_ptr))
        printf("Successfully read the file %s (%" PRIu64 " lines total).", filename, line - 1);

    fclose(file_ptr);
}
