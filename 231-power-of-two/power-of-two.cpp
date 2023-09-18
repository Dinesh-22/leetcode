class Solution {
public:
    bool isPowerOfTwo(int n) {
        // return n>0 && !(n&(n-1));
        if(n==0) return false;
        return ceil(log2(n)) == floor(log2(n));
    }
};