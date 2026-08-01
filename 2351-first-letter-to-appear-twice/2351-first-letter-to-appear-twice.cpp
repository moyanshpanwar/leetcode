class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char> seen_letter;
        for(int i = 0; i<s.length(); i++){
            if(find(seen_letter.begin(), seen_letter.end(), s[i]) != seen_letter.end()){
                return s[i];
            }
            seen_letter.push_back(s[i]);
        }
        return '0';
    }
};