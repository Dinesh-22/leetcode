//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    // int f(int ind, int arr[],vector<int>&dp){
    //     if(ind ==0) return arr[ind];
    //     if(ind<0) return 0;
        
    //     if(dp[ind]!=-1) return dp[ind];
        
    //     int pick = arr[ind]+f(ind-2,arr,dp);
    //     int notPick = 0+f(ind-1,arr,dp);
        
    //     return dp[ind]=max(pick,notPick);
    // }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        // vector<int>dp(n,-1);
        // return f(n-1,arr,dp);
        //Tabulation 
        // vector<int>dp(n,0);
        int prev =arr[0];
        int prev2 = 0;
        int curr = 0;
        for(int i=1;i<n;i++){
            int take = arr[i];
            if(i>1) take+=prev2;
            int notTake = 0+prev;
            curr = max(take,notTake);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends