void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    int i=m+n-1;
    int j=m-1;
    int k=n-1;
    while(i>=0&&j>=0&&k>=0){
        if(nums1[j] > nums2[k]){
            nums1[i--]=nums1[j--];
        }else{nums1[i--]=nums2[k--];}
    }
    while(k>=0){
        nums1[i--]=nums2[k--];
    }
}
