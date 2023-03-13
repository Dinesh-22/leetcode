//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        long long ans = 0;
        int mini = INT_MAX;
        int total = 0;
        for(int i=0;i<N;i++){
            int length = A[i];
            int units = B[i];
            if(units % 2 !=0){
                units --;
            }
            if(units>=2){
                mini = min(mini,length);
            }
            ans+=(length*units);
            total+=units;
        }
        if(total%4!=0) ans -= (2*mini);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends