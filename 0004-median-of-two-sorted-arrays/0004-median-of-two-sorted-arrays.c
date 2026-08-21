double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    double combo[nums1Size+nums2Size];
    
    
    
    for (int i = 0;i<nums1Size;i++){
        combo[i] = nums1[i];
    }
    for(int i = 0;i<nums2Size;i++){
        combo[(nums1Size)+i] = nums2[i];
    }
    for (int i = 0;i<(nums1Size+nums2Size);i++){
        for (int j = i;j<(nums1Size+nums2Size);j++){
            if(combo[i]>combo[j]){
                int temp;
                temp = combo[i];
                combo[i] = combo[j];
                combo[j] = temp;
            }
        }
    }
    if((nums1Size+nums2Size)%2==1){
        return combo[(nums1Size+nums2Size)/2];
    }
    else{
        return (combo[(nums1Size+nums2Size)/2] + combo[((nums1Size+nums2Size)/2)-1])/2;
        
    }
}