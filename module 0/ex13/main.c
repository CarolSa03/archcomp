#include <stdio.h>
#include "cc.h"

int main(){
    printf("Hello World!\n");
    char str[] = "Hello World!";
    int count = count_char(str, 'l');
    printf("Number of 'l' characters: %d\n", count);
    return 0;
}