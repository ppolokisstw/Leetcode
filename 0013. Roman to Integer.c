int getnum(char c)
{
    int i =0;
     switch(c)
        {
         case 'I':
             i=1;
             break;
         case 'V':
             i=5;
             break;
         case 'X':
             i=10;
             break;
         case 'L':
             i=50;
             break;
         case 'C':
             i=100;
             break;
         case 'D':
             i=500;
             break;
         case 'M':
             i=1000;
             break;
        }
    return i;
}

int romanToInt(char * s){
    int store[15];
    int len =strlen(s);
    for(int i=0;i<len;i++)
    {
        store[i]=getnum(s[i]);
        
        int next=getnum(s[i+1]);
        if(store[i]<next)
        {
            int j=i;
            while((j)>=0&&store[j]<next)
            {
                store[j]=(-1)*store[j];
                j--;
            }
        }
    }
    int total=0;
    for(int i=0;i<len;i++)
    {
        total+=store[i];
    }
    return total ;
    
}
