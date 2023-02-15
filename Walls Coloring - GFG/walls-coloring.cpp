//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    vector<vector<int>>dp;
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        dp.resize(N,vector<int>(4,-1));
        return fun(colors,N,0,3);
    }
    int fun(vector<vector<int>> &colors, int N,int i,int prev)
    {
        if(i==colors.size()){
            return 0;
        }
        int pink = INT_MAX, black = INT_MAX , yellow = INT_MAX;
        if(dp[i][prev]!=-1)return dp[i][prev];
        if(prev!=0){
            pink = colors[i][0]+fun(colors,N,i+1,0);
        }
        if(prev!=1){
            black = colors[i][1]+fun(colors,N,i+1,1);
        }
        if(prev!=2){
            yellow = colors[i][2]+fun(colors,N,i+1,2);
        }
        return dp[i][prev]=min(pink,min(black,yellow));
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends