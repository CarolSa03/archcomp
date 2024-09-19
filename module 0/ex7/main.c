#include <stdio.h>
#include "gac.h"

int main(){
    char c = 'a';
    printf("ASCII code of %c = %d\n", c, get_ascii_code(c));
    return 0;
}