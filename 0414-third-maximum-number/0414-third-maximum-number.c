int thirdMax(int* nums, int numsSize) {
    int i, j, maxIndex, temp;
    
    // Selection sort in descending order
    for (i = 0; i < numsSize - 1; i++) {
        maxIndex = i;

        for (j = i + 1; j < numsSize; j++) {
            if (nums[j] > nums[maxIndex]) {
                maxIndex = j;
            }
        }

        // Swap maximum element
        temp = nums[i];
        nums[i] = nums[maxIndex];
        nums[maxIndex] = temp;
    }

    // Count distinct maximum values
    int count = 1;

    for (i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            count++;
        }

        if (count == 3)
            return nums[i];
    }

    // If third maximum doesn't exist
    return nums[0];
}