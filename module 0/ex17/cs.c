#include "fh.h"
#include "cmp.h"

int check_string(char str[], int h){
    int num = fake_hash(str);
    return !cmp(num, h);
}