/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1])
        {
            nums[i]=2*nums[i];
            nums[i+1]=0;
            i++;
        }
    }
    int write=0;
    int* array = (int*)calloc(numsSize, sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            array[write++]=nums[i];
            
        
        }
    }
    // while (write < numsSize) {
    //     array[write++] = 0;
    // }

    *returnSize = numsSize; 
    return array;
}
