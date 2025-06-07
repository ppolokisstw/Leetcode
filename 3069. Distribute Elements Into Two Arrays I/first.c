/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultArray(int* nums, int numsSize, int* returnSize) {
    int* array_a=calloc(numsSize,sizeof(int));
    int* array_b=calloc(numsSize,sizeof(int));
    array_a[0]=nums[0];
    array_b[0]=nums[1];
    int a_count=0;
    int b_count=0;
    for(int i=2;i<numsSize;i++){
        if(array_a[a_count]>array_b[b_count]){
            array_a[++a_count]=nums[i];
        }else{array_b[++b_count]=nums[i];}
    }
    for(int j=0;j<numsSize-a_count-1;j++){
        array_a[j+a_count+1]=array_b[j];
    }
    *returnSize=numsSize;
    return array_a;
    
 

}
