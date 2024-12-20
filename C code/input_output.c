// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     printf("argc = %d\n", argc);
//     for (int i = 0; i < argc; i++)
//         printf("argv[%d] = %s\n", i, argv[i]);
// }

// #include <inttypes.h>
// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     int64_t x = 0, y = 0;
//     int r = 0;

//     printf("Enter x: ");
//     r = scanf("%" PRId64, &x);
//     printf("%d \n", r);
//     if (r == 0)
//     {
//         printf("Incompatible value entered!");
//         return -1;
//     }

//     printf("Enter y: ");
//     r = scanf("%" PRId64, &y);
//     printf("%d \n", r);
//     if (r == 0)
//     {
//         printf("Incompatible value entered!");
//         return -1;
//     }

//     printf("The sum of the numbers is %" PRId64 " + %" PRId64 " = %" PRId64 ".\n", x, y, x + y);
// }
// #include <stdio.h>

// int main(void)
// {
//     const char filename[] = "input_output.c";
//     int chr = 0;
//     FILE *file_ptr = NULL;

//     file_ptr = fopen(filename, "r");
//     if (file_ptr == NULL)
//     {
//         perror("Cannot open file");
//         return -1;
//     }

//     while ((chr = fgetc(file_ptr)) != EOF)
//     {
//         putchar(chr);
//     }

//     if (ferror(file_ptr))
//         printf("\nEncountered an error before reaching the end of file %s. \n", filename);
//     else if (feof(file_ptr))
//         printf("\nSuccessfully read file %s. \n", filename);

//     fclose(file_ptr);
// }

#include <stdio.h>

int main()
{
    int a, b;

    // Input two integers without any prompt
    scanf("%d %d", &a, &b);

    // Print the results after input
    printf("You entered: %d and %d\n", a, b);

    return 0;
}
