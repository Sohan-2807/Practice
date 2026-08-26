/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1;

    while (i >= 0 && digits[i] == 9) {
        digits[i] = 0;
        i--;
    }

    if (i >= 0) {
        digits[i]++;
        *returnSize = digitsSize;
        return digits;
    }

    
    int* result = malloc((digitsSize + 1) * sizeof(int));

    result[0] = 1;

    for (int j = 1; j <= digitsSize; j++) {
        result[j] = 0;
    }

    *returnSize = digitsSize + 1;
    return result;
}