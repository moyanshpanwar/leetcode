class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actual_sum = 0;
        int array_sum = 0;
        for (int i = 0; i<nums.size(); i++){
            actual_sum += i+1;
            array_sum += nums[i];
        }
        int missing_val = actual_sum - array_sum;
        return missing_val;
    }
};