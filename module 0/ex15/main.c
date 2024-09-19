#include <stdio.h>
#include "cw.h"

int main(){
    char str[] = " Hello World!";
    int count = count_words(str);
    printf("Number of words: %d\n", count);
    return 0;
}