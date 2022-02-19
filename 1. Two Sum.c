/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //int num1=0;
    //int num2=0;
    //int array[2]={1,2};
    int * ret_buf = (int*)malloc(sizeof(int)*2);
    bzero(ret_buf , sizeof(int)*2);
    *returnSize = 2;
    for(int i=0;i<numsSize;i++)
    {
        int tmp=target-nums[i];
        //num1=nums[i];
        for(int j=i+1;j<numsSize;j++)
        {
           
            if(tmp==nums[j])
            {
                ret_buf[0]=i;
                ret_buf[1]=j;
                
                return ret_buf;
            }
        }
    }
   
    return ret_buf;
   

}
