char* convert(char* s, int numRows) {
    int len=strlen(s);
    char map[len];
    int not_divisible=0;
    if(numRos==1)return s;
    if(numRows==2){
        int charlen=len/2;
        if (len%2==1){map[charlen]=s[charlen];not_divisible=1;}
        for(int i=0;i<len/2;i++){
            map[i]=s[2*i];
            if(not_divisible){
                map[charlen+i+1]=s[2*i+1];
            }else{map[charlen+i]=s[2*i+1];}     
        } 
    }
    if (numRows>2){
        int charlen=len/numRows;
        for(int i=0;i<charlen;i++){
            
        }
        if (len%2==1){map[len-1]=s[len/2]}
        return map;
//如何空格 想不到
      

    }
}
