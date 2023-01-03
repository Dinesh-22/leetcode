//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            //numbers
            for(int j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
            //space 
            for(int s=1;s<=4*(n-i);s++)
            {
                cout<<" ";
            }
            //numbers 
            for(int j=i;j>=1;j--)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends