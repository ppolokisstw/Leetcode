bool isValid(char* s) {
    char book[10000];
    int len =strlen(s);
    int book_i=0;
    if(len%2==1)return false;
    for(int i =0;i<len;i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {
            book[book_i++]=s[i];
            
        }
        if(s[i]==')'||s[i]==']'||s[i]=='}')
        {
            if(book_i==0)return false;
            book_i--;
            if(s[i]==')'&&book[book_i]=='(')
            {book[book_i]=0;}
            else if((s[i]==']'&&book[book_i]=='['))
            {book[book_i]=0;}
            else if((s[i]=='}'&&book[book_i]=='{'))
            {book[book_i]=0;}
            else{return false;}
        }
        
    }
    if(book_i!=0)return false;
    return true;
}
