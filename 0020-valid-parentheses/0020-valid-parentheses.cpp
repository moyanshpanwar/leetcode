class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        unordered_map<char,char>maps={
        {')','('},{']','['},{'}','{'}
        };
        for(char c:s){
            if(maps.find(c)==maps.end()){
                stack.push(c);
            }
            else if(!stack.empty() && maps[c]==stack.top()){
                stack.pop();
            }
            else{
                return false;
            }
        }
        return stack.empty();
    }
};