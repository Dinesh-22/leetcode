//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void f(int ind,int target, vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        //base case 
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
                return;
            }
            return;
        }
        //pick up the element 
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            f(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        f(ind+1,target,arr,ans,ds);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>arr;
        set<int>st;
        for(auto it: A){
            st.insert(it);
        }
        for(auto it:st){
            arr.push_back(it);
        }
        sort(arr.begin(),arr.end());
        f(0,B,arr,ans,ds);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends