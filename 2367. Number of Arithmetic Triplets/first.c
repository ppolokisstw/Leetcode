nt arithmeticTriplets(int* nums, int numsSize, int diff) {
    int map[201]={0};
    int count=0;
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    for(int i =0;i<numsSize-2;i++){
        if(nums[i]+diff<201&&nums[i]+diff*2<201){
            if(map[nums[i]+diff]>0&&map[nums[i]+2*diff]>0)count++;
        }
    }
    return count;
}
