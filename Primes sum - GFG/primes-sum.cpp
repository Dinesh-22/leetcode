//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    bool isPrime(int x)
    {
        if(x==1) return false;
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0) return false;
        }
        return true;
    }
    bool isTrue(int n)
    {
        if(n<4)return false;
        if(n%2==0) return true;
        return isPrime(n-2);
    }
    string isSumOfTwo(int N){
        // code here
        return isTrue(N)?"Yes":"No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends