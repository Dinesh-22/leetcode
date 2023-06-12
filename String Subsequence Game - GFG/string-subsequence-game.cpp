//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int isVowel(char ch){
      ch = tolower(ch);
      return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
  }
  void f(int ind, set<string>&st, string &temp, string &s, int n){
      //Base case 
      if(ind == n){
          if(isVowel(temp[0]) && !isVowel(temp[temp.size()-1])){
              st.insert(temp);
          }
          return;
      }
      //pick 
      temp = temp + s[ind];
      f(ind+1,st,temp,s,n);
      //not- pick 
      temp.pop_back();
      f(ind+1,st,temp,s,n);
  }
    set<string> allPossibleSubsequences(string s) {
        // code here
        set<string>st;
        string temp="";
        int n = s.size();
        f(0,st,temp,s,n);
        return st;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends