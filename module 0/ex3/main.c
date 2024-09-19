#include <stdio.h>
#include "mull.h"

int main(){
    int a = 5;
    int b = 3;
    printf("%d * %d = %d\n", a, b, mull(a, b));
    return 0;
}