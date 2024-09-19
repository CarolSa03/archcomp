#include "sti.h"

int integer_part(char x[]){
    int i = 0;
    char int_part[100];
    while(x[i] != '\0' && x[i] != '.'){
        int_part[i] = x[i];
        i++;
    }
    int_part[i] = '\0'; 

    if (x[i] != '.') {
        return string_to_int(x);
    }
    
    return string_to_int(int_part);
}
