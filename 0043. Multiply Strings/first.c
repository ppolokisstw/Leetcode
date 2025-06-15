int get_num(char a){
    int tmp =a-'0';
    return tmp;
}
char* multiply(char* num1, char* num2) {
    int m = strlen(num1);
    int n = strlen(num2);
    int* array=(int*)calloc((m+n),sizeof(int));
    
    
    for(int i=m-1;i>-1;i--){
        int carry=0;
        for(int j=n-1;j>-1;j--){
            int tmp=carry+get_num(num1[i])*get_num(num2[j])+(array[i+j+1]);
            array[i+j+1]=tmp%10;
            array[i+j]+=tmp/10;
            
        }
        
    }
    
    int i = 0;
    while (i < m + n-1 && array[i] == 0) i++;

    char* array_re = malloc(m + n - i + 1);
    array_re[m + n - i] = '\0';
    for (int j = 0; i < m + n; i++, j++){
        array_re[j] = array[i] + '0';
    }
    free(array);

    return array_re;

}
