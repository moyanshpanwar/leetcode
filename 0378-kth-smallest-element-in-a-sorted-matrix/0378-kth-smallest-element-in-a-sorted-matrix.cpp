class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>nums;
        for(int i = 0; i<matrix.size(); i++){
            nums.insert(nums.end(), matrix[i].begin(), matrix[i].end());
        }
        sort(nums.begin(), nums.end());
        priority_queue<int, vector<int>, greater<int>>minheap;
        for(int i = 0; i<nums.size(); i++){
            minheap.push(nums[i]);
        }
        for(int i = 0; i<k - 1; i++){
            minheap.pop();
        }
        int kth_smallest = minheap.top();
        return kth_smallest;
    }
};