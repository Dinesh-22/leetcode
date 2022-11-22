//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int countTriplets(vector<int>nums){
	    // Code here.
	    int result=0;
	    for(int i=1;i<nums.size()-1;i++)
	    {
	        int left=0,right=0;
	        //calculate the current element left small
	        for(int j=i-1;j>=0;j--)
	        {
	            if(nums[j] < nums[i])
	            {
	                left++;
	            }
	        }
	        //calculate the current element right big 
	        for(int k=i+1;k<nums.size();k++)
	        {
	            if(nums[k] > nums[i])
	            {
	                right++;
	            }
	        }
	        result+=(left*right);
	    }
	    return result;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends