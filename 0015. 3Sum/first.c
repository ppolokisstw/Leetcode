/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int compare(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}
bool search_tmp2(int* array,int target,int high,int low){
    
    while(low <= high){
        int search=low + (high - low) / 2;
        if(array[search]==target)return true;
        if(array[search]<target){
            low=search+1;
        }
        if(array[search]>target){
            high=search-1;
        }
        
    }
    return false;
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int tmp0,tmp1,tmp2;
    int tran0=0,tran1=0,tran2=0;
    int count=0;
    int rows=100000;
    int cols=3;
    int **array = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        array[i] = malloc(cols * sizeof(int));
    }
    qsort(nums,numsSize,sizeof(int),compare);
    tmp0=nums[0];
    for(int i=0;i<numsSize-2;i++){
        if(i>0&&nums[i]==nums[i-1])continue;
        tmp0=nums[i];
        tmp1=nums[i+1];
        for(int j=i+1;j<numsSize-1;j++){
            if(j>i+1&&nums[j]==nums[j-1])continue;
            tmp1=nums[j];
            tmp2=0-tmp1-tmp0;
            
            if(search_tmp2(nums,tmp2,numsSize-1,j+1)){
                array[count][0]=tmp0;
                array[count][1]=tmp1;
                array[count][2]=tmp2;
                count++;
            }

        }

        
    }
    *returnSize=count;
    int*tmp =(int*)malloc(sizeof(int)*count);
    for(int i=0;i<count;i++){
        tmp[i]=3;
    }
    *returnColumnSizes=tmp;
    
    for (int i = count; i < rows; i++) {
        free(array[i]); 
    }

    
    array = realloc(array, count * sizeof(int *));
    return array;
}
// Time limit exceed
