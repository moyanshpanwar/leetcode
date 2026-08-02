class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int>ans(m + n);
        int i = 0, j = 0, k = 0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ans[k++] = nums1[i++];
            }
            else if(nums1[i]>nums2[j]){
                ans[k++] = nums2[j++];
            }
            else if(nums1[i] == nums2[j]){
                ans[k++] = nums1[i++];
                ans[k++] = nums2[j++];
            }
        }
        while(i<m){
            ans[k++] = nums1[i++];
        }
        while(j<n){
            ans[k++] = nums2[j++];
        }
        int total = m + n;
        if(total % 2 == 1){
            float median = ans[total/2];
            return median;
        }
        else{
            float median = (ans[total/2 - 1] + ans[total/2])/2.0;
            return median;
        }
    }
};