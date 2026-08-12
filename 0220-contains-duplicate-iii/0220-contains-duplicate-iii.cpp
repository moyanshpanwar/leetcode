class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        if(nums.size() == 0 || valueDiff<0 || indexDiff<0){
            return false;
        }
        unordered_map<long long, long long> bucket;
        long long width = (long long)valueDiff + 1;
        for (int i = 0; i<nums.size(); i++) {
            if (i>indexDiff) {
                long long oldBucket = nums[i - indexDiff - 1]/width;
                if (nums[i - indexDiff]<0 && nums[i - indexDiff] % width != 0){
                    oldBucket--;
                }
                bucket.erase(oldBucket);
            }
            long long currentBucket = nums[i] / width;
            if (nums[i]<0 && nums[i] % width != 0){
                currentBucket--;
            }
            if (bucket.find(currentBucket) != bucket.end()){
                return true;
            }
            if (bucket.find(currentBucket - 1) != bucket.end() && llabs((long long)nums[i] - bucket[currentBucket - 1]) <= valueDiff){
                return true;
            }
            if (bucket.find(currentBucket + 1) != bucket.end() && llabs((long long)nums[i] - bucket[currentBucket + 1]) <= valueDiff){
                return true;
            }
            bucket[currentBucket] = nums[i];
        }
        return false;
    }
};