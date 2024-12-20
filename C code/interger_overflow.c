#include <stdio.h>

int main(void)
{
    unsigned char x = 255;
    x++;
    printf("255 + 1 = %d\n", x);
    unsigned int y = 0;
    y--;
    printf("0 - 1 = %d\n", y);
}
