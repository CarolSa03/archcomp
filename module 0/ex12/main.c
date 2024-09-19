#include <stdio.h>
#include "ip.h"
#include "fc.h"

int main() {
    char str[] = "1230.34";
    int num = integer_part(str);
    int frac = fractional_part(str);
    printf("Integer part: %d\n", num);
    printf("Fractional part: %d\n", frac);
    return 0;
}