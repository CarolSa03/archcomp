#include <stdio.h>
#include "get_greater_digit.h"

int main(){
    int n = 11199991;
    printf("The greatest digit in %d = %d\n", n, get_greater_digit(n));
    return 0;
}