//similiar to remove some thing in array

int removeDuplicates(int* nums, int numsSize){

    int shift=0;
    int tmp =nums[0];
    for(int i=1;i+shift<numsSize;i++)
    { 
        while(nums[i+shift]==tmp)
        {
            shift++;
            if(i+shift>=numsSize)return numsSize-shift;
        }
        tmp=nums[i]=nums[i+shift];
    }
    return numsSize-shift;
}
