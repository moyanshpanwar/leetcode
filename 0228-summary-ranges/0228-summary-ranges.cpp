class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ranges;
        if(nums.empty()){
            return ranges;
        }
        int lower = nums[0];
        int higher = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i - 1] + 1){
                higher = nums[i];
            }
            else{
                if(lower == higher){
                    ranges.push_back(to_string(lower));
                }
                else{
                    ranges.push_back(to_string(lower) + "->" + to_string(higher));
                }
                lower = nums[i];
                higher = nums[i];
            }
        }
        if(lower == higher){
            ranges.push_back(to_string(lower));
        }
        else{
            ranges.push_back(to_string(lower) + "->" + to_string(higher));
        }
        return ranges;
    }
};