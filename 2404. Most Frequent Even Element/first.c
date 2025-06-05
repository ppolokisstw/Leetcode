int mostFrequentEven(int* nums, int numsSize) {
    int*heapmap=(int*)calloc(100001,sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            heapmap[(int)(nums[i]/2)]++;
        }
    }
    int max=0;
    int answer=-1;
    for(int i=0;i<50001;i++){
        if(heapmap[i]>max){
            max=heapmap[i];
            answer=i*2;
        }
    }
    
    return answer;
}
