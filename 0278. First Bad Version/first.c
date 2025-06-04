// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int good=0;
    int bad=n;
    int search=bad;
    while(bad-good>1){
        if(isBadVersion(search)==true){
            bad=search;
            search=bad-(int)((bad-good)/2);
        }else if(isBadVersion(search)==false){
            good=search;
            search=bad-(int)((bad-good)/2);
        }
    }
    return bad;
}
