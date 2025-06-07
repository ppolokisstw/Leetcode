char repeatedCharacter(char* s) {
    
    int map[100]={0};
    int len=strlen(s);
    for(int i=0;i<len;i++){
        map[s[i]-' ']++;
        if(map[s[i]-' ']==2)return s[i];
    }

    
    return ' ';
}
