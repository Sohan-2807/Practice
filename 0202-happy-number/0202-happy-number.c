int sumSquare(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }

    return sum;
}

bool isHappy(int n) {
    int once = n;
    int twice = n;

    do {
        once = sumSquare(once);
        twice = sumSquare(sumSquare(twice));
    } while (once != twice);

    return once == 1;
}