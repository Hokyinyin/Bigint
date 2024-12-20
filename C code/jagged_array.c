#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

void print_jagged_array(const char name[const], const char *const the_array[const], const uint64_t rows)
{
    for (uint64_t i = 0; i < rows; i++)
        printf("%s[%" PRIu64 "] = %-5s (%p -> %p, size %zu)\n", name, i, the_array[i], (void *)&the_array[i], (void *)the_array[i], strlen(the_array[i]));
}

void test(const char the_array[])
{
    printf("%p \n", the_array);
}

int main(void)
{
    const char *const jagged[] = {"One", "Two", "Three", "Four"};
    print_jagged_array("jagged", jagged, 4);
    test(jagged);
}
