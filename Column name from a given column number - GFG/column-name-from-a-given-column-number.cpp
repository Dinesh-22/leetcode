//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int N)
    {
        // your code here
        string ans ="";
        while(N){
            int rem = N%26;
            if(rem == 0){
                ans = 'Z'+ans;
                N = N/26-1;
            }
            else{
                char ch = 'A'+rem-1;
                ans = ch+ans;
                N = N/26;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends