bool divideArray(int* nums, int numsSize) {
    int map[501];
    for(int i=0;i<numsSize;i++){
        map[nums[i]]++;
    }
    for(int i=0;i<501;i++){
        if(map[i]%2==1)return false;
    }
    return true;
}
