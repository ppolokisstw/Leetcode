int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b); // a < b => 負數，a > b => 正數
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),compare);

    
    int tmp=nums[0];
    for(int i=1;i<numsSize;i++){
        if(nums[i]==tmp){
            return true;
        }else{tmp=nums[i];}

    }
    
    
    
    
    return false;
}
