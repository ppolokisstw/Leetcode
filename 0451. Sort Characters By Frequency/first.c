int compare(const void* a,const void* b){
    return ( *(int*)b -*(int*)a );
}
char* frequencySort(char* s) {
    int len=strlen(s);
    int map[100]={0};
    for(int i=0;i<len;i++){
        map[s[i]-' ']++;
    }
    int num[100]={0};
    for(int i=0;i<100;i++){
        num[i]=map[i];
    }
    qsort(num,100,sizeof(int),compare);
    int cur=0;
    for(int i=0;i<100;i++){
        if(num[i]>0){
            for(int j=0;j<100;j++){
                if(map[j]==num[i]){
                    for(int k=0;k<map[j];k++){
                        s[cur++]=' '+j;
                    }
                    num[i]=0;
                    map[j]=0;
                }
                
            }
        }
    }
    return s;

}
