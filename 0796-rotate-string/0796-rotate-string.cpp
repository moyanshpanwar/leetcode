class Solution {
public:
    bool rotateString(string s, string goal) {
        string concatenate_str = s + s;
        if(s.length() != goal.length()){
            return false;
        }
        if(concatenate_str.find(goal) != string::npos){
            return true;
        }
        return false;
    }
};