char* longestCommonPrefix(char** strs, int strsSize) {
    int j = 0, i;
    while (strs[0][j]) {
        for (i = 1; i < strsSize; i++)
            if (strs[i][j] != strs[0][j]) {
                strs[0][j] = '\0';
                return strs[0];
            }
        j++;
    }
    return strs[0];
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna