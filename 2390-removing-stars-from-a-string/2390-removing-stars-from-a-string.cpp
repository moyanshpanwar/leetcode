class Solution {
public:
    string removeStars(string s) {
        stack<char>char_stack;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '*'){
                char_stack.pop();   
            }
            else{
                char_stack.push(s[i]);
            }       
        }
        string result = "";
        while(!char_stack.empty()){
            result += char_stack.top();
            char_stack.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};