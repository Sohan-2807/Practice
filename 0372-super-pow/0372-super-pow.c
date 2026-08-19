#define MOD 1337

int modPow(int a, int n) {
    int result = 1;
    a %= MOD;

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * a) % MOD;
        }

        a = (a * a) % MOD;
        n /= 2;
    }

    return result;
}

int superPow(int a, int* b, int bSize) {
    int result = 1;

    for (int i = 0; i < bSize; i++) {
        result = (modPow(result, 10) * modPow(a, b[i])) % MOD;
    }

    return result;
}