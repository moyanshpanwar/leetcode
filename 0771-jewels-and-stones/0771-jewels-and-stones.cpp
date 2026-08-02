class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_set<char>jewel_set;
        for(int c = 0; c<jewels.length(); c++){
            jewel_set.insert(jewels[c]);
        }
        for(int i = 0; i<stones.length(); i++){
            if(jewel_set.find(stones[i]) != jewel_set.end()){
                count++;
            }
        }
        return count;
    }
};