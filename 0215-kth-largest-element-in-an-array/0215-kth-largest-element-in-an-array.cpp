class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxHeap;
        for (int i = 0; i<nums.size(); i++){
            maxHeap.push(nums[i]);
        }
        for(int j = 0; j<k-1; j++){
            maxHeap.pop();
        }
        int kth_largest = maxHeap.top();
        return kth_largest;
    }
};