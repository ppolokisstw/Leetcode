int rob(int* nums, int numsSize) {
    if(numsSize<0)return 0;
    if(numsSize==1)return nums[0];
    int pre1=nums[0];
    int pre2=(nums[0]>nums[1])?nums[0]:nums[1];
    for(int i=2;i<numsSize;i++){
        int current=((pre1+nums[i])>pre2)?(pre1+nums[i]):pre2;
        pre1=pre2;
        pre2=current;
    }
    return pre2;
  
}
