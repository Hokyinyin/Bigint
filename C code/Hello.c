#include <stdio.h> // not a part of the code, it is an instruction to the compiler // include a file in this file. stdio.h is a header file that contain def and define, eg. printf
/*Known as preprocessor directive*/

int main(void)
{ // int is the return output type, main is the name of the function (No Sure), void is the input
    // main is the main function, there could be many function, compiler will identify main function as the first function
    // int is an integer output that inform the OS that whether the program run succeessfully
    int x = 0;
    int r = 0;

    // printf("Hello, World: ");
    // r = scanf("%d", &x);
    // printf("%d \n", r);
    char name = "Hello World";

    printf("%c", name);

    // for (int8_t i = 0; i < sizeof(name); i++)
    {
        // printf("%c \n", name[i]);
    }
}

// pretaks : c code to exe file -> to build the exe file and debug it
// 8 bit  = 1byte

// signed 000 = 0, 001 =1 010 = 2, 011 =3, 111 = -1,110 = -2 [-2^(N-1),2^(N-1)-1]
