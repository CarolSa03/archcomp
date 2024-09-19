#include <stdio.h>
#include "cv.h"

int main(){
    int vec[] = {1, 5, 3, 4, 5, 5, 7, 8, 9, 15};
    int n = 9;
    int value = 5;
    int count = count_value(vec, n, value);
    printf("Number of %d's in the vector: %d\n", value, count);
    return 0;
}