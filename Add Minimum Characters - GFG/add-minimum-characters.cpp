//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        //code here
        int n=str.size();
        int left = 0,right = n-1;
        int ans=0;
        while(left<=right){
            if(str[left] == str[right]){
                left++;
                right--;
                continue;
            }
            ans++;
            left=0;
            right = n-ans-1;
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
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends