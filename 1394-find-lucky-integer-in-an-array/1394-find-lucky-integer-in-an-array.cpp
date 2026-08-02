class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq_map;
        for(int i = 0; i<arr.size(); i++){
            freq_map[arr[i]]++;
        }
        int ans = -1;
        for(int i = 1; i<=arr.size(); i++){
            if(freq_map[i] == i){
                ans = max(ans, i);
            }
        }
        return ans;
    }
};