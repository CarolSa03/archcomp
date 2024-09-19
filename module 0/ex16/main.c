#include <stdio.h>
#include "fh.h"

int main(){
    char str[] = "hello"; // ASCII values: 104 101 108 108 111 -> 532
    int num = fake_hash(str);
    printf("The sum of the ASCII values of %s is %d\n", str, num);
}