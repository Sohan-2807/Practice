int* resultArray(int* nums, int numsSize, int* returnSize) {

    int *arr1 = malloc(numsSize * sizeof(int));
    int *arr2 = malloc(numsSize * sizeof(int));
    int *result = malloc(numsSize * sizeof(int));

    arr1[0] = nums[0];
    arr2[0] = nums[1];

    int x = 1;
    int y = 1;

    for (int i = 2; i < numsSize; i++) {

        if (arr1[x - 1] > arr2[y - 1]) {
            arr1[x] = nums[i];
            x++;
        }
        else {
            arr2[y] = nums[i];
            y++;
        }
    }

    // Copy arr1 into result
    for (int i = 0; i < x; i++) {
        result[i] = arr1[i];
    }

    // Copy arr2 into result
    for (int i = 0; i < y; i++) {
        result[x + i] = arr2[i];
    }

    *returnSize = x + y;

    free(arr1);
    free(arr2);

    return result;
}