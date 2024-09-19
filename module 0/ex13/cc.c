#include "gac.h"

int count_char(char str[], int c){
    char ptr = get_ascii_char(c);
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == ptr){
            count++;
        }
        i++;
    }
    return count;
}