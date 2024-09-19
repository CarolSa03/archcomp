#include "gac.h"
#include "sum.h"

int fake_hash(char str[]){
    int num = 0;
    int i = 0;
    while(str[i] != '\0'){
        num += get_ascii_code(str[i]);
        i++;
    }
    return num;
}