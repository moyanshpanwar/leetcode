class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       unordered_set<int>nums_set;
       vector<int>ans;
       int min_num = nums[0];
       int max_num = nums[0];
       for(int i = 0; i<nums.size(); i++){
        nums_set.insert(nums[i]);
        min_num = min(min_num, nums[i]);
        max_num = max(max_num, nums[i]);
       }
       for(int i = min_num; i<=max_num; i++){
         if(nums_set.find(i) == nums_set.end()){
            ans.push_back(i);
         }
       }
       return ans;
    }
};