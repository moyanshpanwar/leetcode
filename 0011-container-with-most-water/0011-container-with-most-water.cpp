class Solution {
public:
    int maxArea(vector<int>& height) {
        int best= 0;
        int left = 0;
        int right = height.size()-1;
        while(left<right){
            int water_height = min(height[left], height[right]);
            int width = right - left;
            int area = width * water_height;
            best = max(best, area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return best;
    }
};