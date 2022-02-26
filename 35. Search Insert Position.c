

int searchInsert(int* nums, int numsSize, int target){
    int start=0;
    int end =numsSize-1;
    int output=(start+end)/2;
    if(nums[end]<target)return numsSize;
    if(nums[start]>=target)return start;
    
    while((nums[output]<target&&nums[output+1]>=target)==false)
    {
        if(nums[output]<target)
        {
            start=output;
        }
        else
        {
            end=output;
            
        }
        output=(int)((end+start)/2);
        
    }
    
    return output+1;
}
