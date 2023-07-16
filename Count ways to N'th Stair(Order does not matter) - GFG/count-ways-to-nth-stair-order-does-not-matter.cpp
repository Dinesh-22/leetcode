//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    //  Code here
		 int prev =1,prev2=1;
		 int curr;
		 for(int i=2;i<=n;i++){
		     curr = prev2+1;
		     prev2 = prev;
		     prev = curr;
		 }
		 return prev;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends