//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void f(int ind,vector<int>&arr, int n, int target, vector<vector<int>>&ans,vector<int>&ds)
    {
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++)
        {
            if(i>ind && arr[i]==arr[i-1])continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            f(i+1,arr,n,target-arr[i],ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>ds;
        f(0,arr,n,k,ans,ds);
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends