#include <stdio.h>

int mull(int a, int b){
    if(b == 0){
        return 0;
    }
    else if(b<0){
        return -a + mull(a, b+1);
    }
    else{
        return a + mull(a, b-1);
    }
}