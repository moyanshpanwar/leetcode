class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>seen_set;
        if(n == 1){
            return true;
        }
        while(seen_set.find(n) == seen_set.end()){
            seen_set.insert(n);
            string curr = to_string(n);
            int sum=0;
            for(int i = 0; i<curr.length(); i++){
                int digit = curr[i] - '0';
                sum = sum + digit * digit;
            }
            if(sum == 1){
                return true;
            }
            n = sum;
        }
        return false;
    }
};