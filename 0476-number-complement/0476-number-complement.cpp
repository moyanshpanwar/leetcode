class Solution {
public:
    int findComplement(int num) {
        int temp = log2(abs(num)) + 1;
        int complement = num ^ ((1u << temp) - 1);
        return complement;
    }
};