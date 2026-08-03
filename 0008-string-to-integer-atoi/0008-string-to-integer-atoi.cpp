class Solution {
public:
    int myAtoi(string s) {
        /*step1*/
        int i = 0;
        while(i<s.length() && s[i] == ' '){
            i++;
        }
        if(i == s.length()){
            return 0;
        }
        /*step2*/
        int sign = 1;
        if(s[i] == '+'){
            i++;
        }
        else if(s[i] == '-'){
            sign = -1;
            i++;
        }
        /*step3*/
        long long result = 0;
        while(i<s.length() && isdigit(s[i])){
            int single_num = s[i] -'0';
            if (result > (INT_MAX - single_num) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = result * 10 + single_num;
            i++;
        }
        /*step4*/
        if(sign*result>INT_MAX){
            return INT_MAX;
        }
        if(sign*result<INT_MIN){
            return INT_MIN;
        }
        return static_cast<int>(sign*result);
    }
};