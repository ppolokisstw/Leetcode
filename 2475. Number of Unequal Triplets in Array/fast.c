int unequalTriplets(int* nums, int numsSize) {
    int num_range=1001;
    int map[1001]={0};
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    int count=0;
    int count_1=0;
    int count_2=0;
    for(int i=0;i<num_range;i++){
        if(map[i]==0)continue;
        count+=count_1*map[i]*(numsSize-map[i]-count_1);
        count_1+=map[i];
    }
    return count;
}
