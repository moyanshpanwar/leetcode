class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left_arr(nums.size());
        vector<int>right_arr(nums.size());
        vector<int>answer(nums.size());
        left_arr[0] = 1;
        right_arr[nums.size()-1] = 1;
        for(int i = 1; i<nums.size(); i++){
            left_arr[i] = left_arr[i-1] * nums[i-1];
        }
        for(int j = nums.size()-2; j>=0; j--){
            right_arr[j] = right_arr[j+1] * nums[j+1];
        }
        for(int k = 0; k<nums.size(); k++){
            answer[k] = left_arr[k] * right_arr[k];
        }
        return answer;
    }
};