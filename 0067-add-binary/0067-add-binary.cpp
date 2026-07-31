class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int a_index=a.length()-1;
        int b_index=b.length()-1;
        int carry=0;
        while(a_index>=0 || b_index>=0 || carry==1){
            if(a_index>=0){
                carry+=a[a_index--]-'0';
            }
            if(b_index>=0){
                carry+=b[b_index--]-'0';
            }
            result+=carry%2+'0';
            carry/=2;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};