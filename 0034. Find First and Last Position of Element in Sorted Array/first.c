/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int high=numsSize-1;
    int low=0;
    int search=high;
    int* array=(int*)calloc(2,sizeof(int));
    * returnSize=2;
    if(numsSize<1){
            array[0]=-1;
            array[1]=-1;
            return array;
        }
    
    while(nums[search]!=target){
        if(high-low<2&&nums[high]!=target&&nums[low]!=target){
            array[0]=-1;
            array[1]=-1;
            return array;
        }
        if(high-low<2&&(nums[high]==target||nums[low]==target)){
            int tmp=0;
            if(nums[high]==target)tmp=high;
            if(nums[low]==target)tmp=low;
            array[0]=tmp;
            array[1]=tmp;
            return array;
        }
        if(nums[search]>target){
            high=search;
            
        }
        if(nums[search]<target){
            low=search;
            
        }
        search=(int)((high-low)/2+low);
    }

    int search_low=search;
    int low_high=search_low;
    if(nums[low]==target){}
    while(low_high-low>1&&nums[low]!=target){
        if(nums[search_low]==target){
            low_high=search_low;
            
        }
        if(nums[search_low]<target){
            low=search_low;
            
        }
        search_low=(low_high-low)/2+low;
    }
    int search_high=high;
    int high_low=search;
    while(high-high_low>1&&nums[high]!=target){
        if(nums[search_high]>target){
            high=search_high;
            
        }
        if(nums[search_high]==target){
            high_low=search_high;
        }
        search_high=(high-high_low)/2+high_low;
    }
    if(nums[low]==target){array[0]=low;}
    else{array[0]=low_high;}
    if(nums[high]==target){array[1]=high;}
    else{array[1]=high_low;}
    
    return array;
}
