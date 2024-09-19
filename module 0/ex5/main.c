#include <stdio.h>
#include "cmp.h"

int main(){
    int a = 5;
    int b = 3;
    printf("If a is greater than b, returns 1, if a is less than b, returns -1, if a is equal to b, returns 0.\n");    
    printf("cmp(%d, %d) = %d\n", a, b, cmp(a, b));
    printf("cmp(%d, %d) = %d\n", a, a, cmp(a, a));
    printf("cmp(%d, %d) = %d\n", b, a, cmp(b, a));

    return 0;
}