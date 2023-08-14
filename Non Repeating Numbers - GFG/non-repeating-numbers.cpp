//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xorans = 0;
        for(int i=0;i<nums.size();i++){
            xorans^=nums[i];
        }
        //find the rightmost setbit
        xorans = xorans & ~(xorans-1);
        int set1 =0,set2=0;
        for(int i=0;i<nums.size();i++){
            if(xorans & nums[i]){
                set1^=nums[i];
            }
            else{
                set2^=nums[i];
            }
        }
        vector<int>ans;
        ans.push_back(set1);
        ans.push_back(set2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends