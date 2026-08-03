class Solution {
public:
    int reverse(int x) {
        string temp = to_string(abs((long long)x));
        std::reverse(temp.begin(), temp.end());
        long long result = stoll(temp);
        if(x<0){
            result = -result;
        }
        if(result>INT_MAX || result<INT_MIN){
            return 0;
        }
        return (int)result;
    }
};