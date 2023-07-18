//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int solve(int i,int j, string &str1, string &str2, vector<vector<int>>&dp){
	        if(i==str1.size() || j==str2.size()){
	            return 0;
	        }
	        if(dp[i][j]!=-1) return dp[i][j];
	        if(str1[i]==str2[j] && j!=i){
	            return dp[i][j] = 1+solve(i+1,j+1,str1,str2,dp);
	        }
	        int a = solve(i+1,j,str1,str2,dp);
	        int b = solve(i,j+1,str1,str2,dp);
	        return dp[i][j]=max(a,b);
	    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.size();
		    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
		    //return solve(0,0,str,str,dp);
		    for(int i=n;i>=0;i--){
		        for(int j=n;j>=0;j--){
		            if(i==n || j==n){
		                dp[i][j]=0;
		            }
		            else if(str[i] == str[j] && j!=i){
		                dp[i][j] = 1+dp[i+1][j+1];
		            }
		            else{
		                dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
		            }
		        }
		    }
		    return dp[0][0];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends