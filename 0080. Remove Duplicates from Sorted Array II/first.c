int removeDuplicates(int* nums, int numsSize) {
    int numsSize_after=0;
    int cur_num=nums[0];
    int count=0;
    int cur_paste=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==cur_num){
            count++;
            if(count<3){
                nums[cur_paste]=nums[i];
                cur_paste++;
            }
        }
        if(nums[i]!=cur_num){
            count=1;
            nums[cur_paste]=nums[i];
            cur_num=nums[i];
            cur_paste++;
       }
    }
    return cur_paste;
}
