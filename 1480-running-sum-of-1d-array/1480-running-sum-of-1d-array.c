/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int* op = malloc(numsSize * sizeof(int));
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        op[i] = sum;
    }

    return op;
}