int mostFrequentEven(int* nums, int numsSize) {
    int count[100001] = {0};  // 用於計數偶數頻率
    int maxFreq = 0;
    int answer = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            count[nums[i]]++;
            if (count[nums[i]] > maxFreq || 
               (count[nums[i]] == maxFreq && nums[i] < answer)) {
                maxFreq = count[nums[i]];
                answer = nums[i];
            }
        }
    }

    return answer;
}
