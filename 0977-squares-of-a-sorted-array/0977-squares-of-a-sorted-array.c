/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    for(int i = 0;i<numsSize;i++){
        result[i] = nums[i] * nums[i];
    }
    for(int i = 0;i<numsSize-1;i++){
        for(int j = 0;j<numsSize-i-1;j++){
            if(result[j]>result[j+1]){
                int temp = result[j];
                result[j] = result[j+1];
                result[j+1] = temp;
            }
        }
    }
    
    *returnSize = numsSize;
    return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna