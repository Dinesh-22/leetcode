//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int one_cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                one_cnt++;
                a[i]=-1;
            }
            else{
                a[i]=1;
            }
        }
        //kadanes algorithm 
        int curr_sum = 0, max_sum=0;
        for(int i=0;i<n;i++){
            if(curr_sum<0) curr_sum = 0;
            curr_sum+=a[i];
            max_sum = max(curr_sum,max_sum);
        }
        return one_cnt+max_sum;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends