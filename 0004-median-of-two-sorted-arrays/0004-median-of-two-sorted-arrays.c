double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int size = nums1Size+nums2Size;
    double combo[size];
    
    
    
    for (int i = 0;i<nums1Size;i++){
        combo[i] = nums1[i];
    }
    for(int i = 0;i<nums2Size;i++){
        combo[(nums1Size)+i] = nums2[i];
    }
    for (int i = 0;i<size;i++){
        for (int j = i;j<size;j++){
            if(combo[i]>combo[j]){
                int temp;
                temp = combo[i];
                combo[i] = combo[j];
                combo[j] = temp;
            }
        }
    }
    if(size%2==1){
        return combo[size/2];
    }
    else{
        double x = (combo[size/2] + combo[(size/2)-1])/2;
        return x;
    }
}