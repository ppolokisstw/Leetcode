int firstUniqChar(char* s) {
    int map[100]={0};
    int len=strlen(s);
    for(int i=0;i<len;i++){
        map[s[i]-' ']++;
    }

    for(int i=0;i<len;i++){
        if(map[s[i]-' ']==1)return i;
    }
    return -1;
}
