class Solution {
public:
    int fib(int n) {
        if(n ==0){
            return 0;
        }
        vector<int> resultant;
        resultant.push_back(0);
        resultant.push_back(1);
        for(int i = 2; i<=n; i++){
            resultant.push_back(resultant[i-1] + resultant[i-2]);
        }
        return resultant[n];
    }
};