#include<stdio.h>
#include "lib_prop_numbers.h"

int main(void){
    int n = 5;
    printf("factorial of %d: ", n);
    print_fact(n);
    
    printf("\nsum of first %d whole numbers = %d\n", n, sum_n(n));

    return 0;
}
