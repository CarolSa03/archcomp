#include "gac.h"
int string_to_int(char str[]) {
    int i = 0;
    int num = 0;
    while (str[i] != 0) {
        num = num * 10 + get_ascii_code(str[i]);
        i++;
    }
    return num;
}

