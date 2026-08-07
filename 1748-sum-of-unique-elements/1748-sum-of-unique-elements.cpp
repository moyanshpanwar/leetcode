class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int, int>freq_map;
        for(int i = 0; i<nums.size(); i++){
            freq_map[nums[i]]++;
        }
        for(int i = 0; i<nums.size(); i++){
            if(freq_map[nums[i]] == 1){
                sum += nums[i];
            }
        }
        return sum;
    }
};