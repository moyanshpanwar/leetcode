class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>maps_s;
        map<char, int>maps_t;
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i<min(s.length(), t.length()); i++){
            maps_s[s[i]]++;
            maps_t[t[i]]++;
        }
        if(maps_s == maps_t){
            return true;
        }
        return false;
    }
};