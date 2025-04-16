int maxArea(int* height, int heightSize)
{
    int right=heightSize-1,left=0;
    int maxArea = 0;
    
    while (left < right) {
        int h = (height[left] < height[right]) ? height[left] : height[right];
        int area = h * (right - left);
        if (area > maxArea)
            maxArea = area;

        
        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return maxArea;
}
