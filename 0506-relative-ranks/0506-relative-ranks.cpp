class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>answer(score.size());
        priority_queue<int>maxheap;
        for(int i = 0; i<score.size(); i++){
            maxheap.push(score[i]);
        }
        int rank = 1;
        while(!maxheap.empty()){
            int highest = maxheap.top();
            maxheap.pop();
             for (int i = 0; i < score.size(); i++) {
                if(score[i] == highest) {
                    if(rank == 1){
                        answer[i] = "Gold Medal";
                    }
                    else if(rank == 2){
                        answer[i] = "Silver Medal";
                    }
                    else if(rank == 3){
                        answer[i] = "Bronze Medal";
                    }
                    else{
                        answer[i] = to_string(rank);
                    }
                    break;
                }
            }
            rank++;
        }
        return answer;
    }
};