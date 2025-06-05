/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize) {
    int high=arrSize-k;
    int low= 0;
    while(low<high){
        int mid= (low+high)/2;    
        if(x-arr[mid]>arr[mid+k]-x){
            low=mid+1;
        }else{high=mid;}
    }
    

    int* array=(int*)malloc(sizeof(int)*k);
    for(int i=0;i<k;i++){
        array[i]=arr[low+i];
    }
  
    *returnSize=k;
    return array;


}
