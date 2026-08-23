#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

int myAtoi(char* s) {
    int i = 0;
    int sign = 1;
    long long num = 0;

    // 1. Skip leading whitespace
    while (s[i] == ' ') {
        i++;
    }

    // 2. Check sign
    if (s[i] == '-') {
        sign = -1;
        i++;
    }
    else if (s[i] == '+') {
        i++;
    }

    // 3. Convert digits
    while (isdigit(s[i])) {
        num = num * 10 + (s[i] - '0');

        // 4. Check overflow
        if (sign == 1 && num > INT_MAX) {
            return INT_MAX;
        }

        if (sign == -1 && -num < INT_MIN) {
            return INT_MIN;
        }

        i++;
    }

    return (int)(sign * num);
}