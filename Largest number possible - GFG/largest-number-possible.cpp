//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int sum){
        // code here
        if((sum>N*9) || (sum==0&& N>1)) return "-1";
        string ans="";
        while(sum>=9){
            ans+="9";
            sum-=9;
            N--;
        }
        while(N!=0){
            if(sum!=0){
                ans+=to_string(sum);
                sum=0;
            }
            else{
                ans+="0";
            }
            N--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends