//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int n = s.size();
        int l=0,r=n-1;
        while(l<r){
            if(s[l]!='?' && s[r]!='?' && s[l]!=s[r]){
                return -1;
            }
            else if(s[l]=='?' && s[r]!='?'){
                s[l]=s[r];
            }
            else if(s[l]!='?' && s[r]=='?'){
                s[r]=s[l];
            }
            else if(l!=0 && s[l]=='?' && s[r]=='?' && s[l-1]!='?'){
                s[l]=s[r]=s[l-1];
            }
            l++;
            r--;
        }
        int ans=0;
        //Now the string is palindrome calculate the abs difference
        for(int i=1;i<=n/2;i++){
            if(s[i]=='?'){
                continue;
            }
            if(s[i-1]!='?'){
                ans+=2*abs(s[i]-s[i-1]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends