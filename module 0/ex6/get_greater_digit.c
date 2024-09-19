int get_greater_digit(int n){
    int divisor = 1;
    int result = 0;

    while(n/divisor >= 10){
        divisor *= 10;
    }

    while(divisor > 0){
        int digit = n/divisor;
        if(digit >= result){
            result = digit;
        }
        n %= divisor;
        divisor /= 10;
    }
    return result;
}