int maxArea(int* height, int heightSize)
{
    int i =0;
    int j=0;
    int i_tmp=0;
    int j_tmp=0;
    int tmp_size=0;
    int biggest_size=0;
    int h=0;
    for(i=0;i<heightSize;i++){
        
        if (height[i]>i_tmp){
            i_tmp=height[i];
            for(j=heightSize-1;j>i;j--){
                if(height[j]>j_tmp){
                    j_tmp=height[j];
                    if(height[i]>height[j]){h=height[j];}
                    else h=height[i];
                
            
            
                    tmp_size=h*(j-i);
                    if(tmp_size>biggest_size)biggest_size=tmp_size;
                }
            }
            j_tmp=0;
        }
    }
    return biggest_size;
}
