#include <stdio.h>

int main(void)
{
    signed int answer = -1;
    printf("%d\n", answer);
}

// The data type defined for the variable does not affect the result, instead thee placeholder does?
// https://stackoverflow.com/questions/1831753/c-unsigned-int-providing-a-negative-value
// Should be related to pointer
