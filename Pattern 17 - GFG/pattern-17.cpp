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
            char ch='A';
            //space 
            for(int s=n-1;s>=i;s--)
            {
                cout<<" ";
            }
            //numbers 
            for(int j=1;j<(2*i);j++)
            {
                cout<<ch;
                if(j<i)ch++;
                else ch--;
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