class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;
        for(int i = 0; i<word.length(); i++){
            if(isupper(word[i])){
                capital++;
            }
        }
        if(capital == word.length()){
            return true;
        }
        if(capital == 0){
            return true;
        }
        if(isupper(word[0]) && capital == 1){
            return true;
        }
        return false;
    }
};