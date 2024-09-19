#include "sum.h"

int sum_digits(int n){
    int divisor = 1;
    int result = 0;

    while(n/divisor >= 10){
        divisor *= 10;
    }

    while(divisor > 0){
        int digit = n/divisor;
        result = sum(digit, result);
        n %= divisor;
        divisor /= 10;
    }
    return result;
}