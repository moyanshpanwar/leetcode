class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high){
        int left_arr_size = mid - low + 1;
        int right_arr_size = high - mid;
        vector<int>left(left_arr_size);
        vector<int>right(right_arr_size);
        for(int i = 0; i<left_arr_size; i++){
            left[i] = nums[low + i];
        }
        for(int i = 0; i<right_arr_size; i++){
            right[i] = nums[mid + 1 + i];
        }
        int i = 0, j = 0, k = low;
        while(i < left_arr_size && j < right_arr_size){
           if(left[i] <= right[j]){
                nums[k++] = left[i++];
            }
            else{
                nums[k++] = right[j++];
            }
        }
        while(i<left_arr_size){
            nums[k++] = left[i++];
        }
        while(j<right_arr_size){
            nums[k++] = right[j++];
        }
    }
    void mergesort(vector<int>& nums, int low, int high){
        if(low>=high){
            return;
        }
        int mid = (high + low)/2;
        mergesort(nums, low, mid);
        mergesort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};