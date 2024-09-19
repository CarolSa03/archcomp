#include <stdio.h>
#include "sti.h"

int main() {
    char str[] = "1230";
    int num = string_to_int(str);
    printf("%d\n", num);
    return 0;
}