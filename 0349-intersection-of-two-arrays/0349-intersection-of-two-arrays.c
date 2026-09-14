/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int present[1001] = {0};
    int *result = (int*)malloc(1001 * sizeof(int));
    *returnSize = 0;

    // Mark elements of nums1
    for (int i = 0; i < nums1Size; i++) {
        present[nums1[i]] = 1;
    }

    // Check elements of nums2
    for (int i = 0; i < nums2Size; i++) {
        if (present[nums2[i]] == 1) {
            result[*returnSize] = nums2[i];
            (*returnSize)++;

            // Prevent duplicates
            present[nums2[i]] = 0;
        }
    }

    return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna