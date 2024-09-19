#include "sti.h"

int fractional_part(char x[]){
    int i = 0;
    char frac_part[100]; 

    while(x[i] != '\0' && x[i] != '.'){
        i++;
    }

    if (x[i] == '\0') {
        return 0;
    }

    i++; 
    int j = 0;

    while(x[i] != '\0'){
        frac_part[j] = x[i];
        i++;
        j++;
    }
    frac_part[j] = '\0'; 

    return string_to_int(frac_part);
    
}