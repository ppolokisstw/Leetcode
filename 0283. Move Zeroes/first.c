void moveZeroes(int* nums, int numsSize) {
    int write=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[write++]=nums[i];
            if((write-1)!=i){
                nums[i]=0;
            }
            
        
        }
    }
}
