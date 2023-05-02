//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        
        //1. push all the index into the stack 
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        //2. take 2 elements from the stack and perform certain operations
        while(st.size()>1){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            //if a knows b (discard a then push b)
            if(M[a][b]==1){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        int ans = st.top();
        //check whether the ans is the potential candidate for celebrity.
        //rowcheck -> check all element are zeros
        bool rowCheck = false;
        int zeroCount = 0;
        for(int i=0;i<n;i++){
            if(M[ans][i]==0){
                zeroCount++;
            }
        }
        if(zeroCount == n){
            rowCheck = true;
        }
        bool colCheck = false;
        int colCount = 0;
        for(int i=0;i<n;i++){
            if(M[i][ans]==1){
                colCount++;
            }
        }
        if(colCount == n-1){
            colCheck = true;
        }
        
        if(rowCheck == true && colCheck == true){
            return ans;
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends