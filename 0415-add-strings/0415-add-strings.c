char* addStrings(char* num1, char* num2) {
    int n = strlen(num1);
    int m = strlen(num2);

    int size = (n > m ? n : m) + 2;
    char* result = (char*)malloc(size);

    int i = n - 1;
    int j = m - 1;
    int k = size - 2;
    int carry = 0;

    result[size - 1] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int a = (i >= 0) ? num1[i] - '0' : 0;
        int b = (j >= 0) ? num2[j] - '0' : 0;

        int sum = a + b + carry;

        result[k--] = (sum % 10) + '0';
        carry = sum / 10;

        i--;
        j--;
    }

    return result + k + 1;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna