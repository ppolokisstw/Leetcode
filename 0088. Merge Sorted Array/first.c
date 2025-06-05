void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    if(m==0){
        for(int i=0;i<n;i++){nums1[i]=nums2[i];}
        
    }else if(n==0){nums1=nums1;

    }else{
        int* array_m=(int*)malloc(sizeof(int)*m);
        for(int i=0;i<m;i++){
            array_m[i]=nums1[i];
        }
        int c_n=0;
        int c_m=0;
        int i=0;
        while(c_n<n&&c_m<m){
            if(array_m[c_m]<=nums2[c_n]){
                nums1[i]=array_m[c_m];
                c_m++;
            }else {
                nums1[i]=nums2[c_n];
                c_n++;
            }
            i++;
        }
        if(c_n<n){
            for(i=i;i<m+n;i++){
                nums1[i]=nums2[c_n];
                c_n++;
            }
        }
        if(c_m<m){
            for(;i<m+n;i++){
                nums1[i]=array_m[c_m];
                c_m++;
            }
        }
    }
}
