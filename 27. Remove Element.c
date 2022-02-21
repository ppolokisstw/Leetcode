
int removeElement(int* nums, int numsSize, int val){
    int shift=0;
    if (numsSize==0) return 0;
    // use two i+shift bool function
    //maybe can think a way to replace it 
    for(int i=0;i+shift<numsSize;i++)
    {
        
        
        while( nums[i+shift]==val)
        {
            shift++;
            if(i+shift>=numsSize)return numsSize-shift;
        }
        
        nums[i]=nums[i+shift];
    }
    //return the number after remove
    return numsSize-shift;
}
