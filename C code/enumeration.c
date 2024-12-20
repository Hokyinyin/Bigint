// #include <stdio.h>

// enum color
// {
//     RED,
//     GREEN,
//     BLUE
// };

// int main(void)
// {
//     printf("RED = %d, GREEN = %d, BLUE = %d\n", RED, GREEN, BLUE);
// }

#include <stdio.h>

enum color
{
    RED,
    GREEN,
    BLUE
};

int main(void)
{
    // const enum color c = GREEN;
    switch (BLUE)
    {
    case RED:
        printf("Color is red.\n");
        break;
    case GREEN:
        printf("Color is green.\n");
        break;
    case BLUE:
        printf("Color is blue.\n");
        break;
    }
}
