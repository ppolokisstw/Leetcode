int maximumUniqueSubarray(int* nums, int numsSize) {
   int map[10001]={0};
   int maxValue=0;
   int tmpValue=0;
   int left=0, right=0;
   while(right<numsSize){
    int cur=nums[right];//CPU cache friendly
    map[cur]++;
    tmpValue+=cur;
    while(map[cur]>1){
        map[nums[left]]--;
        tmpValue-=nums[left];
        left++;
        
    }
    if(maxValue<tmpValue)
    {
        maxValue=tmpValue;
    }
    right++;
   }
   return maxValue;
}
