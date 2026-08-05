class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int nums_len = nums.size();
        k = k % nums_len;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};