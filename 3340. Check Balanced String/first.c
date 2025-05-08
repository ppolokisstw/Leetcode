bool isBalanced(char* num) {
   int len=strlen(num);
   int pmsign=1;
   int sum=0;
   for(int i=0;i<len;i++) {
    sum=sum+(pmsign*(int)(num[i]-'0'));
    pmsign=pmsign*(-1);

   }
   if(sum!=0)return false;
   return true;
}
