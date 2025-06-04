/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
 int guess(int num);
#include <limits.h>
int guessNumber(int n){

    int high=INT_MAX;
    int low=0;
    int tmp=guess(n);
    while(tmp!=0){
        if(tmp==1){
            low=n;
        }
        if(tmp==-1){
            high=n;
        }
        n=low+(int)((high-low)/2);
        tmp=guess(n);
    }
    return n;

	
}
