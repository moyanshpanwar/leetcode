class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int min_product = nums[left] * nums[left + 1];
        int max_product = nums[right] * nums[right - 1];
        int  dif = max_product - min_product;
        return dif;
    }
};