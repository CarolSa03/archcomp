#include <stdio.h>
#include "size.h"

int main(){
    printf("Size of char: %d\n", sizechar());
    printf("Size of int: %d\n", sizeint());
    printf("Size of unsigned int: %d\n", sizeunsignedint());
    printf("Size of long: %d\n", sizelong());
    printf("Size of short: %d\n", sizeshort());
    printf("Size of long long: %d\n", sizelonglong());
    printf("Size of float: %d\n", sizefloat());
    printf("Size of double: %d\n", sizedouble());
    return 0;
}