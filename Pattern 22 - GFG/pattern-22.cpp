//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        int s=(2*n)-1;
        int matrix[s][s];
        int front = 0,last = s-1;
        while(n!=0)
        {
            for(int i=front;i<=last;i++)
            {
                for(int j=front;j<=last;j++)
                {
                    if(i==front||j==front||i==last||j==last)
                    {
                        matrix[i][j]=n;
                    }
                }
            }
            front++;
            last--;
            n--;
        }
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s;j++)
            {
                cout<<matrix[i][j]<<" ";
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends