#include <stdio.h>

int a = 1;
int b = 2;
int c = 3;
int d = 4;

void test(void)
{
    printf("b is: %d \n ", b);
    printf("c is: %d \n", c);
}

int main(void)
{
    printf("a is: %d \n ", a); // Place a breakpoint here
    test();
    printf("d is: %d \n ", d);
}
