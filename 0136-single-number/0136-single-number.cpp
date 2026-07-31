class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            if(nums.size()==1){
                return nums[i];
            }
            result^=nums[i];
        }
        return result;
    }
};