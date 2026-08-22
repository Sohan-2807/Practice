long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

long long countAmounts(long long x, int* coins, int coinsSize) {
    long long count = 0;
    int total = 1 << coinsSize;

    for (int mask = 1; mask < total; mask++) {
        long long multiple = 1;
        int bits = 0;
        bool valid = true;

        for (int i = 0; i < coinsSize; i++) {
            if (mask & (1 << i)) {
                bits++;

                multiple = lcm(multiple, coins[i]);

                if (multiple > x) {
                    valid = false;
                    break;
                }
            }
        }

        if (!valid)
            continue;

        long long current = x / multiple;

        if (bits % 2 == 1)
            count += current;
        else
            count -= current;
    }

    return count;
}

long long findKthSmallest(int* coins, int coinsSize, long long k) {
    long long low = 1;
    long long high = 1LL * coins[0] * k;

    for (int i = 1; i < coinsSize; i++) {
        long long limit = 1LL * coins[i] * k;
        if (limit < high)
            high = limit;
    }

    while (low < high) {
        long long mid = low + (high - low) / 2;

        if (countAmounts(mid, coins, coinsSize) >= k)
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}