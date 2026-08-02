class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>solution_map;
        for(int i = 0; i<nums.size(); i++){
            if(solution_map.find(nums[i]) != solution_map.end()){
                if(abs(i - solution_map[nums[i]]) <= k){
                    return true;
                }
            }
            solution_map[nums[i]] = i;
        }
        return false;
    }
};