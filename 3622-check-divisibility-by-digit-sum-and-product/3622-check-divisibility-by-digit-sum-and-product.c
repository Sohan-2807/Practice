bool checkDivisibility(int n) {
    int original = n;
    int prod = 1;
    int sum = 0;
    int a ;

    while (n > 0) {
        int digit = n % 10;

        prod *= digit;
        sum += digit;

        n /= 10;
    }
    a = sum+prod;
    if (original % a == 0){
        return true;
    }

    return false;
}