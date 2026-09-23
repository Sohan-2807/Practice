bool isMonotonic(int* nums, int numsSize) {
    int increasing = 1;
    int decreasing = 1;

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] > nums[i + 1])
            increasing = 0;

        if (nums[i] < nums[i + 1])
            decreasing = 0;
    }

    return increasing || decreasing;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna