//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
        string a="";
        a.push_back(str[0]);
        for(int i=1;i<str.size();i++){
            if(str[i]<str[i-1] || i>1 && str[i]==str[i-1]){
                a.push_back(str[i]);
            }
            else{
                break;
            }
        }
        string b=a;
        reverse(a.begin(),a.end());
        b+=a;
        return b;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends