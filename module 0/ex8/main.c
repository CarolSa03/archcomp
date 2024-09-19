#include <stdio.h>
#include "gac.h"

int main(){
    int c = 97;
    printf("ASCII char of %d = %c\n", c, get_ascii_char(c));
    return 0;
}