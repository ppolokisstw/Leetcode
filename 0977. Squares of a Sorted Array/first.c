/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int sqrtt(int nums){
    return nums*nums;
}
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* array=(int*)malloc(sizeof(int)*numsSize);
    int count=0;
    while(count<numsSize){
        if(nums[count]<0){
            nums[count]=-1*nums[count];
            count++;
        }else{break;}
    }
    int end=count;
    int front=count-1;
    int i=0;
    while(end<numsSize&&front>=0){
        if(nums[end]>=nums[front]){
            array[i++]=sqrtt(nums[front--]);
        }else{array[i++]=sqrtt(nums[end++]);}
    }
    while(front>=0){
        
        array[i++]=sqrtt(nums[front--]);
    }
    while(end<numsSize){
        array[i++]=sqrtt(nums[end++]);
    }
    *returnSize=numsSize;
    return array;
}
