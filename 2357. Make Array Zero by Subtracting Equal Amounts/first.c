int minimumOperations(int* nums, int numsSize) {
    int* map=(int*)calloc(101,sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0)map[nums[i]]++;
    }
    int count=0;
    for(int i=0;i<101;i++){
        if(map[i]!=0)count++;
    }
    return count;
    
}
