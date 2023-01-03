//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        //upper half 
        for(int i=n;i>=1;i--)
        {
            //stars 
            for(int j=i;j>=1;j--)
            {
                cout<<"*";
            }
            for(int s=2*(n-i);s>=1;s--)
            {
                cout<<" ";
            }
            for(int j=i;j>=1;j--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
        //bottom half 
        for(int i=1;i<=n;i++)
        {
            //stars
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
            }
            //space 
            for(int s=1;s<=2*(n-i);s++)
            {
                cout<<" ";
            }
            
            //stars
            for(int j=1;j<=i;j++)
            {
                cout<<"*";
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