//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        multiset<int> s;
    	vector<int> ret;
    	for(int i = 0; i < k; i++){
    		s.insert(arr[i]);
    	}
    	for(int i = k; i < n; i++){
    		ret.push_back(*s.rbegin());
    		s.erase(s.find(arr[i-k]));
    		s.insert(arr[i]);
    	}
    	ret.push_back(*s.rbegin());
    	return ret;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends