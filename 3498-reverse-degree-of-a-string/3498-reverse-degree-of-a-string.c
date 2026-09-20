int reverseDegree(char* s) {
    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int rev = 26 - (s[i] - 'a');
        sum += rev * (i + 1);
    }

    return sum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna