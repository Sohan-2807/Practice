int divide(int dividend, int divisor) {
    // used chatgpt; learnt new topic;
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    long long a = dividend;
    long long b = divisor;

    // Determine sign
    int negative = 0;

    if (a < 0) {
        a = -a;
        negative = !negative;
    }

    if (b < 0) {
        b = -b;
        negative = !negative;
    }

    long long quotient = 0;

    // Repeatedly subtract the largest doubled divisor
    while (a >= b) {
        long long temp = b;
        long long multiple = 1;

        while ((temp << 1) <= a) {
            temp <<= 1;
            multiple <<= 1;
        }

        a -= temp;
        quotient += multiple;
    }

    if (negative)
        quotient = -quotient;

    return (int)quotient;
}