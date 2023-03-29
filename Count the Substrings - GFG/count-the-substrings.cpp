//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string s)
    {
        // code here
        int n=s.size();
        int up = 0 , low =0,ans=0,k=0;
        for(int i=0;i<n;i++){
            up=0,low=0;
            for(int j=i;j<n;j++){
                if(isupper(s[j])) up++;
                else if(islower(s[j])) low++;
                if(up == low) ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends