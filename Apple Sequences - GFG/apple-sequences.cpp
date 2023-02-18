//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // code here 
        int start=0,end=0;
        int ctr=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            char ch = arr[i];
            if(ch=='A'){
                maxi=max(maxi,i-start+1);
            }
            if(ch=='O'){
                ctr++;
                if(ctr>m){
                    while(start < i && arr[start]=='A')
                       start++;
                    start++;   
                }
                
            }
            maxi=max(maxi,i-start+1);
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends