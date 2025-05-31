int minimumCardPickup(int* cards, int cardsSize) {
    int map[1000001]={0};
    int right=0,left=0;
    int shortLen=cardsSize+1;
    int norepeat=0;
    for(right=0;right<cardsSize;right++){
        int curRight=cards[right];
        map[curRight]++;
        while(map[curRight]>1){
            map[cards[left]]--;
            left++;
            norepeat=1;
            
        }
        //if put norepeat flag in the while loop still need to add 2 or put before the left++
        if(norepeat==1){
            if(shortLen>right-left+2){

                shortLen=right-left+2;
            }
            norepeat=0;
        }
    }
    if(shortLen==cardsSize+1){
        return -1;
    }
    return shortLen;
}
