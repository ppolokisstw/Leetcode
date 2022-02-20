/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int * ret_buf = (int*)malloc(sizeof(int)*(digitsSize+1));
    //bzero(ret_buf , sizeof(int)*(digitsSize+1));
    int i=digitsSize-1;
    int plusone=1;
    
    do //plus one 
    {
        
        digits[i]=digits[i]+plusone;
        if(digits[i]==10)
        {
            ret_buf[i]=0;
            plusone=1;
        }
        else
        {
            ret_buf[i]=digits[i];
            plusone=0;
        }
        i--;
    }while(i>=0);
    if(plusone==1)//check the highest level
    {
        for(int j=digitsSize;j>0;j--)
        {
            ret_buf[j]=ret_buf[j-1];
        }
        ret_buf[0]=1;
        digitsSize=digitsSize+1;
    }
    *returnSize=digitsSize;
    return ret_buf;

}
