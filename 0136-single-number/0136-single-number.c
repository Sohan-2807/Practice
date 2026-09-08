int singleNumber(int* nums, int numsSize) {
    int ans = 0;

    for (int i = 0; i < numsSize; i++) {
        ans ^= nums[i];
    }

    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna