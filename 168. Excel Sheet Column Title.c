char * convertToTitle(int columnNumber)
{
    int num[10];
    int i=0;
    int tmp = 0;
    while(27<=columnNumber)
    {
        
        tmp=num[i]=columnNumber%26;
        columnNumber=columnNumber/26;
        if(tmp==0)
        columnNumber=columnNumber-1;
        i++;
    }
    num[i]=columnNumber%26;
    char * arr = (char * ) calloc(10, sizeof(char));
    for(int j=0;j<=i;j++)
    {
        if(num[j]==0)num[j]=26;
        arr[i-j]=64+num[j];
        
    }
    return arr;
        
}
