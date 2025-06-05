int findClosestNumber(int* nums, int numsSize) {
    int min=nums[0]-0;
    if(min<0)min=min*-1;
    int num=nums[0];
    for(int i =0;i<numsSize;i++){
        int tmp=nums[i]-0;
        if(tmp<0)tmp=tmp*-1;
        if(tmp<min)num=nums[i],min=tmp;
        if(tmp==min&&nums[i]>num)num=nums[i];
    }
    return num;
    
}
