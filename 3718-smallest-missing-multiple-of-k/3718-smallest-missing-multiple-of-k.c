int missingMultiple(int* nums, int numsSize, int k) {
    int op;

    for (int i = 1; ; i++) {
        op = k * i;

        int found = 0;

        for (int j = 0; j < numsSize; j++) {
            if (nums[j] == op) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            return op;
        }
    }
}