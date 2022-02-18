bool isPalindrome(int x){
    bool result=false;
    if(x<0)return result;
    int mat[10]={0};
    double ten=10;
    int t=0;
    while(x>=ten)
    {
        ten=ten*10;
        t++;
    }
    int ten2=ten/10;
    int temp=t;
    while(x>0)
    {
        mat[temp]=x/ten2;
        x=x%ten2;
        ten2=ten2/10;
        
        temp--;
    }
    if((t+1)%2==1)
    {
        for(int i=0;i<=t/2;i++)
        {
            if(mat[i]!=mat[t-i])return result;
        }
    }
    if((t+1)%2==0)
    {
        for(int i=0;i<=(t+1)/2;i++)
        {
            if(mat[i]!=mat[t-i])return result;
        }
    }
    return true;
}   
