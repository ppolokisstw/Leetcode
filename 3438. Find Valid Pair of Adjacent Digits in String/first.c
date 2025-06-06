char* findValidPair(char* s) {
    int len_s=strlen(s);
    int list[10]={0};
    for(int i=0;i<len_s;i++){
        list[s[i]-'0']++;
    }
    int count=0;
    
    char* tmp=(char*)calloc(3,sizeof(char));
    
    for (int i = 0; i < len_s && count < 2; i++) {
        int digit = s[i] - '0';
        if (list[digit] == digit) {
            // 確保沒重複存入相同數字字元
            if (count == 0 || s[i] != tmp[0]) {
                tmp[count++] = s[i];
            }
        } else {
            count = 0;
            tmp[0]=' ';
        }
    }
    if(count<2)tmp[0]='\0'; 
    return tmp;
}
