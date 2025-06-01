int partitionString(char* s) {
    int map[128]={0};
    int amount_substring=0;
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(map[s[i]]==1)
        {
            memset(map,0,sizeof(map));
            amount_substring++;
        }
        map[s[i]]++;
    }
    return amount_substring+1;
}
