#include "cmp.h"

int find_pattern(char str[], char patt[]){
    int i = 0;
    int j = 0;
    int count = 0;
    while(str[i] != '\0'){
        if(cmp(str[i], patt[j]) == 0){
            j++;
            if(patt[j] == '\0'){
                count++;
                j = 0;
            }
        } else {
            j = 0;
        }
        i++;
    }
    return count;
}