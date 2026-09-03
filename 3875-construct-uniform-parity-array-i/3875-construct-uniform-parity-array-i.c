bool uniformArray(int* nums1, int nums1Size) {
    // flag = true;
    for(int i = 0;i<nums1Size;i++){
        for(int j = i;j<nums1Size;j++){
            if((nums1[i] - nums1[j])%2 == 0){
                return true;
            }
        }
    }
    return false;
}