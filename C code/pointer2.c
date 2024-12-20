// #include <stdint.h>
// #include <stdio.h>

// int main(void)
// {
//     int32_t x = 7;
//     int32_t *p = &x;
//     printf("%p\n", &x);
//     printf("p = %p, *p = %d\n", p, *p);
//     *p = 9; // dereferencing
//     printf("x = %d\n", x);
// }

#include <stdint.h>
#include <stdio.h>

int main(void)
{
    int16_t var = 4;
    int16_t var2 = 2;
    int16_t *p = &var;
    int16_t *p2 = &var2;
    printf("The address is: %p and the value is : %d \n", p, *p);
    *p = var2;
    printf("The address is: %p and the value is : %d \n", p, *p);
    printf("The address of var: %p and the address of var2: %p \n", &var, &var2);
}

// #include <stdio.h>

// int main(void)
// {
//     double var = 0;
//     double other_var = 0;
//     const double con = 0;
//     const double other_con = 0;

//     double *var_ptr_to_var = &var;
//     double *const con_ptr_to_var = &var;
//     const double *var_ptr_to_con = &con;
//     const double *const con_ptr_to_con = &con;

//     var = 1; // Legal: var is not const, so can be changed.
//     con = 1; // Illegal: con is const, so cannot be changed.

//     var_ptr_to_var = &other_var; // Legal: pointer itself is not const, so can be changed.
//     *var_ptr_to_var = 2;         // Legal: variable pointed to is not const, so can be changed.

//     con_ptr_to_var = &other_var; // Illegal: pointer itself is const, so cannot be changed.
//     *con_ptr_to_var = 2;         // Legal: variable pointed to is not const, so can be changed.

//     var_ptr_to_con = &other_con; // Legal: pointer itself is not const, so can be changed.
//     *var_ptr_to_con = 2;         // Illegal: variable pointed to is const, so cannot be changed.

//     con_ptr_to_con = &other_con; // Illegal: pointer itself is const, so cannot be changed.
//     *con_ptr_to_con = 2;         // Illegal: variable pointed to is const, so cannot be changed.
// }
