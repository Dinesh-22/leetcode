//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string>s1;
            string t="";
            for(int i=0;i<s.length();i++) {
                if(s[i]>='0' && s[i]<='9') t+=s[i];
                else {
                    s1.push(t);
                    t.clear();
                    string a="";
                    a+=s[i];
                    s1.push(a);
                }
            }
            s1.push(t);
            string ans="";
            while(!s1.empty()) {
                string p=s1.top();
                s1.pop();
                ans+=p;
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends