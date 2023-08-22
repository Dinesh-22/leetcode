//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        vector<int>temp(n);
        int want = 0;
        int row,col;
        for(int i=0;i<n;i++){
            row=0;
            col=0;
            for(int j=0;j<n;j++){
                row+=matrix[j][i];
                col+=matrix[i][j];
            }
            want = max({want,row,col});
            temp[i]=row;
        }
        int ans =0;
        for(auto it:temp){
            ans+= want - it;
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
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends