#include <stdio.h> 
#include "average.h"

int main() {
    int v[] = {1,2}; int r = 0;
    r = average(v[0], v[1]); 
    printf("average = %d\n", r); 
    return 0;
}