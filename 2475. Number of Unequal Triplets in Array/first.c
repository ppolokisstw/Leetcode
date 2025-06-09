int unequalTriplets(int* nums, int numsSize) {
    int num_range=1001;
    int map[1001]={0};
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    int count=0;
    for(int i=0;i<num_range-2;i++){
        if(map[i]==0)continue;
        for(int j=i+1;j<num_range-1;j++){
            if(map[j]==0)continue;
            for(int k=j+1;k<num_range;k++){
                if(map[k]==0)continue;
                count+=map[i]*map[j]*map[k];
            }
        }
    }
    return count;
}
// runtime beat 5.7%
