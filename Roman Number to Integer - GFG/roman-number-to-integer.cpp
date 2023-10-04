//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int pattern(char ch){
        if(ch=='I') return 1;
        else if(ch=='V') return 5;
        else if(ch=='X') return 10;
        else if(ch=='L') return 50;
        else if(ch=='C') return 100;
        else if(ch=='D') return 500;
        else if(ch=='M') return 1000;
    }
    int romanToDecimal(string &s) {
        // code here
        int n = s.size();
        int num = 0;
        for(int i=0;i<n-1;i++){
            int diff = pattern(s[i]) - pattern(s[i+1]);
            if(diff<0) num-=pattern(s[i]);
            else num+=pattern(s[i]);
        }
        num+=pattern(s[n-1]);
        return num;
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
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends