int findKthPositive(int* arr, int arrSize, int k) {
    int num = 1;
    int index = 0;

    while (k > 0) {
        
        if (index < arrSize && arr[index] == num) {
            index++;
        } 
        else {
            k--;
        }

        if (k == 0) {
            return num;
        }

        num++;
    }

    return num;
}