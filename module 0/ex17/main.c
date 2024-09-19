#include <stdio.h>
#include "cs.h"

int main(){
    char str[] = "hello";
    char str2[] = "123";
    int result = check_string(str, 532); // ASCII values: 104 101 108 108 111 -> 532, so should return 1
    int result2 = check_string(str2, 151); // ASCII values: 49 50 51 -> 150, so shoudl return 0
    printf("For string %s, the result is %d and for string %s, the result is %d\n", str, result, str2, result2);
}