

int climbStairs(int n){
    int sum=0;
    for(int i=0;i<=(n+1)/2;i++)
    {
        //I give up to use int
        double c1=1;
        double c2=1;
        for(int j=n-i;j>n-2*i;j--)
        {
            c1=c1*j;
        }
            
            
        for(int j=i;j>0;j--)
        {
            c2=c2*j;
        }
        
           
        
        sum=sum+(c1/c2);
    }
    return sum;
}
