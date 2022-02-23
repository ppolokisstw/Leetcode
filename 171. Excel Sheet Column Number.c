

int titleToNumber(char * columnTitle){
    int sum=0;
    int size=strlen(columnTitle);
    for(int i=0;i<size;i++)
    {
        sum=sum*26;
        sum=columnTitle[i]-64+sum;
    }
    return sum;
}
