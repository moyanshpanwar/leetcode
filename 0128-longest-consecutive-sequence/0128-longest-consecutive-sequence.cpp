class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int>nums_set;
        for(int i = 0; i<nums.size(); i++){
            nums_set.insert(nums[i]);
        }
        for (int num : nums_set) {
            if (nums_set.find(num - 1) == nums_set.end()) {
                int current = num;
                int length = 1;
                while(nums_set.find(current + 1) != nums_set.end()){
                    length++;
                    current++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};