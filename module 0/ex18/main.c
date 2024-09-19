#include <stdio.h>
#include "fp.h"

int main(){
    char str[] = "ola Pedro, ola Laura, lala La";
    char str2[] = "la";
    int x = find_pattern(str, str2);
    printf("Number of %s patterns in %s: %d\n", str2, str, x);
}