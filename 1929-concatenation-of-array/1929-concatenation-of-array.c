int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;

    int* ans = malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }

    return ans;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna