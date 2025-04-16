
char side_c(char c)
{
    
    switch(c)
    {
        case ')':
            c='(';
            break;
        case ']':
            c='[';
            break;
        case '}':
            c='{';
            break;
    }
    return c;
        
}

bool isValid(char * s){
    int i =0;
    int shift=1;
    int size=strlen(s);
    int n=0;
    bool result=false;
    if(size%2!=0)return false;
    while (n<size)
    {
        result=false;
        while(i<size-n&&n<size)
        {
        
            if(s[i]==')'||s[i]==']'||s[i]=='}')
            {
                if(i==0)return false;//first is close
                if(s[i-1]==side_c(s[i]))
                {
                    n=n+2;
                    result=true;
                    for(int j=i-1;j<size-2;j++)//remove complexity(O(n^2))
                    {
                        s[j]=s[j+2];
                    }
                    i=0;
                
                }
            else if(s[i-shift]!=')'||s[i-shift]!=']'||s[i-shift]!='}')return false;
                
            }
            
            i++;
        }
        if(result==false)return false;//no remove
    }
    return result;
}
