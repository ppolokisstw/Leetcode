int lengthOfLongestSubstring(char* s) {
    int high=0;
    int map[128]={0};//only on ascII
    int right=0,left=0;
    while(s[right]){
        map[s[right]]++;
        
        while(map[s[right]]>1){
            map[s[left]]--;
            left++;

        }
        if(high<right-left+1){
            high=right-left+1;
        }
        right++;
    }
    return high;
    }
