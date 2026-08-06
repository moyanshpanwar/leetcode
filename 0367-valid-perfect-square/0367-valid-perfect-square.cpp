class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        int left = 1;
        int right = num/2;
        int ans = 0;
        while(left <= right){
            int mid=(right + left)/2;
            if(mid <= num/mid){
                ans = mid;
                left = mid + 1;
            }
            else{
                right = mid-1;
            }
        }
        return (long long)ans * ans == num;
    }
};