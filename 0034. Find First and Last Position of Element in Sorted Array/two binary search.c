/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int* res = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;

    // 找第一個出現的位置
    int left = 0, right = numsSize - 1, first = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] >= target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
        if (nums[mid] == target) first = mid;
    }

    // 找最後一個出現的位置
    left = 0, right = numsSize - 1;
    int last = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        if (nums[mid] == target) last = mid;
    }

    res[0] = first;
    res[1] = last;
    return res;
}
