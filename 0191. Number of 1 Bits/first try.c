int hammingWeight(int n) {
    if(n==1)return 1;
    
    int result=0;
    if(n>=2)
    {
        result=hammingWeight(n/2);
        result+=n%2;
    }
    return result;
}
