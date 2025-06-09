
int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){
    int count=0;
    for(int i=0;i<arrSize-2;i++){
        for(int j=i+1;j<arrSize-1;j++){
            if(abs(arr[j]-arr[i])>a)continue;
            for(int k=j+1;k<arrSize;k++){
                if(abs(arr[k]-arr[j])>b)continue;
                if(abs(arr[k]-arr[i])>c)continue;
                count++;
        }
        }
    
    }
    return count;
}  
