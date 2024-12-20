#include <stdio.h>
#include <stdint.h>

int main(void)
{
    const int x = 10;
    int y = x;

    y = y + x;
    printf("%d \n", y);
}