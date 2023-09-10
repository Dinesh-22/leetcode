class Solution {
public:
    int countOrders(int n) {
        long dp[501];
        dp[1]=1;
        dp[2]=6;
        int mod = 1e9+7;
        for(int i=3;i<=n;i++){
            int spaces = 2*i-1;
            int sumOfSpaces = (spaces*(spaces+1))/2;
            dp[i] = (dp[i-1] * sumOfSpaces)%mod;
        }
        return (int)dp[n];
    }
};