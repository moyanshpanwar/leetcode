class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int>freq_map;
        for(int i = 0; i<nums.size(); i++){
            freq_map[nums[i]]++;
            if(freq_map[nums[i]] > 2){
                return false;
            }
        }
        return true;
    }
};