class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxima = 0;
        int num_zeros = 0;
        int left = 0, right = 0;
        for (right = 0; right<nums.size(); right++){
            if(nums[right] == 0){
                num_zeros +=1;
            }
            while(num_zeros > k){
                if(nums[left] == 0){
                    num_zeros -=1;
                }
                left +=1;
            }
            maxima = max(maxima, (right - left + 1));
        }
        return maxima;
    }
};