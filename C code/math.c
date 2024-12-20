// #include <stdio.h>
// #include <tgmath.h>

// int main(void)
// {
//     const double x = 2.0;
//     printf("sqrt(2)   = %f\n", sqrt(x));
//     printf("exp(2)    = %f\n", exp(x));
//     printf("log(2)    = %f\n", log(x));

//     const long double pi = acos(-1.0L);
//     printf("sin(pi/4) = %Lf\n", sin(pi / 4));
//     printf("cos(pi/3) = %Lf\n", cos(pi / 3));
//     printf("tan(pi/2) = %Lf\n", tan(pi / 2));
// }

#include <stdio.h>
#include <tgmath.h>

int main(void)
{
    const double complex z = 1 + 2 * I;
    printf("z      = %4.1f%+4.1fi\n", creal(z), cimag(z));
    printf("z*     = %4.1f%+4.1fi\n", creal(conj(z)), cimag(conj(z)));
    printf("|z|    = %9f\n", fabs(z));
    printf("arg(z) = %9f\n", carg(z));
    printf("z^2    = %4.1f%+4.1fi\n", creal(pow(z, 2)), cimag(pow(z, 2)));
    printf("1/z    = %4.1f%+4.1fi\n", creal(1 / z), cimag(1 / z));
}
