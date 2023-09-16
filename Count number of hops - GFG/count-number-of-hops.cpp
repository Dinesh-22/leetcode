//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        if(n<=1) return 1;
        if(n==2) return n;
        long long mod = 1000000007;
        // your code here
        long long prev = 1, prev1=1, prev2 = 2;
        long long ans=0;
        for(int i=3;i<=n;i++){
            ans = (prev+prev1+prev2)%mod;
            prev = prev1;
            prev1 = prev2;
            prev2 = ans;
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends