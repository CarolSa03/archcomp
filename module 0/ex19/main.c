#include <stdio.h>
#include "sm.h"

int main(){
    int mt[5][3] = {
    {1, 2, 3},  
    {1, 2, 3}, 
    {7, 8, 9},
    {10, 11, 12},
    {13, 14, 15}
};
int sum = sum_matrix_values(mt);
printf("Sum of the matrix values: %d\n", sum); // Expected output: 111
return 0;
}