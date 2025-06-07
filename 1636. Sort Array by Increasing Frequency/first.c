/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void* a,const void* b){
    return ( *(int*)a -*(int*)b );
}
int* frequencySort(int* nums, int numsSize, int* returnSize) {
    
    int* array=(int*)calloc(numsSize,sizeof(int));
    
    int map[201]={0};
    for(int i=0;i<numsSize;i++){
        map[nums[i]+100]++;
    }
    int fre[201]={0};
    for(int i=0;i<201;i++){
        fre[i]=map[i];
    }
    qsort(fre,201,sizeof(int),compare);
    int cur=0;
    for(int i=0;i<201;i++){
        if(fre[i]>0){
            for(int j=200;j>-1;j--){
                if(map[j]==fre[i]){
                    for(int k=0;k<map[j];k++){
                        array[cur++]=j-100;
                    }
                    fre[i]=0;
                    map[j]=0;
                }
                
            }
        }
    }
    *returnSize=numsSize;
    return array;


}
