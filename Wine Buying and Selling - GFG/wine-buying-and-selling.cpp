//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  long long int wineSelling(vector<int>& arr, int n){
      //Code here.
      
      vector<pair<int,int>>buy;
      vector<pair<int,int>>sell;
      
      for(int i=0;i<n;i++)
      {
          if(arr[i]<0)
          {
              sell.push_back({-1*arr[i],i});
          }
          else
          {
              buy.push_back({arr[i],i});
          }
      }
      int i=0,j=0;
      long long int ans = 0;
      while(i<buy.size() && j<sell.size())
      {
          int bottles = min(buy[i].first,sell[j].first);
          buy[i].first-=bottles;
          sell[j].first-=bottles;
          
          int d=abs(sell[j].second-buy[i].second);
          ans+=bottles*d;
          
          if(buy[i].first==0) i++;
          else if (sell[j].first==0)j++;
          
      }
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
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends