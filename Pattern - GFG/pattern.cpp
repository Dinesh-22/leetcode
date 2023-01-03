//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        //upper half 
        for(int i=1;i<=n;i++)
        {
            //space 
            for(int s=n-1;s>=i;s--)
            {
                cout<<" ";
            }
            //stars
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        
        
        //lower half
        for(int i=n;i>=1;i--)
        {
            //space 
            for(int s=i;s<=n-1;s++)
            {
                cout<<" ";
            }
            //stars
            for(int j=i;j>=1;j--)
            {
                cout<<"* ";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends