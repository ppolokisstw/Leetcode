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
    int rows=1024;
    int cols=3;
    int **array = malloc(rows * sizeof(int *));
    int shift=200000;
    for (int i = 0; i < rows; i++) {
        array[i] = malloc(cols * sizeof(int));
    }
    int heapmap[1000000]={0};
    for(int i=0;i<numsSize;i++){
        heapmap[nums[i]+shift]++;
    }
    qsort(nums,numsSize,sizeof(int),compare);
    tmp0=nums[0];
    for(int i=0;i<numsSize-2;i++){
        if(i>0&&nums[i]==nums[i-1])continue;
        int tmp0 = nums[i];
        heapmap[tmp0+shift]--;
        for (int j = i + 1; j < numsSize - 1; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int tmp1 = nums[j];
            heapmap[tmp1+shift]--;
            int tmp2 = -tmp0 - tmp1;
            if(heapmap[tmp2+shift]>0&&tmp2>=tmp1){
                array[count][0] = tmp0;
                array[count][1] = tmp1;
                array[count][2] = tmp2;
                count++;
                if (count >= rows) {
                    int old_rows = rows;
                    rows *= 2;
                    array = realloc(array, rows * sizeof(int *));
                    for (int k = old_rows; k < rows; k++) {
                        array[k] = malloc(cols * sizeof(int));
                    }       
                }
            }
            heapmap[tmp1+shift]++;
        }
        heapmap[tmp0+shift]++;
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
