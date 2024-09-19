#include "cmp.h"

int count_value(int vec[], int n, int value){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(cmp(vec[i], value) == 0){
            count++;
        }
    }
    return count;
}