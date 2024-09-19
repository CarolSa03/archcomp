#include <stdio.h>
#include "sum_digits.h"

int main(){
    int n = 12345;
    printf("The sum of the digits in %d = %d\n", n, sum_digits(n));
    return 0;
}