//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int f(int ind, int W, int val[],int wt[],vector<vector<int>>&dp){
        if(ind ==0){
            return ((int)(W/wt[0]))* val[0];
        }
        if(dp[ind][W]!=-1) return dp[ind][W];
        int notTake = 0+f(ind-1,W,val,wt,dp);
        int take = 0;
        if(wt[ind]<=W){
            take = val[ind]+f(ind,W-wt[ind],val,wt,dp);
        }
        return dp[ind][W] = max(take,notTake);
    }
    int knapSack(int N, int w, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N,vector<int>(w+1,0));
        // return f(N-1,w,val,wt,dp);
        
        for(int i=wt[0];i<=w;i++){
            dp[0][i] = ((int)(i/wt[0])) * val[0];
        }
        
        for(int ind=1;ind<N;ind++){
            for(int W=0;W<=w;W++){
                int notTake = 0+dp[ind-1][W];
                int take = 0;
                if(wt[ind]<=W){
                    take = val[ind]+dp[ind][W-wt[ind]];
                }
                dp[ind][W] = max(take,notTake);
            }
        }
        return dp[N-1][w];
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends