class Solution {
public:
    bool canJump(vector<int>& nums) {
        int end_goal = nums.size()-1;
        for(int i = end_goal; i>=0; i--){
            if(i + nums[i] >= end_goal){
                end_goal = i;
                if(end_goal == 0){
                    return true;
                }
            }
        }
        return false;
    }
};