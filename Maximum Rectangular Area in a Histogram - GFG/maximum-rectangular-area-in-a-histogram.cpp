//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    vector<long long>nextSmallerElement(long long arr[],int n){
        stack<long long>st;
        st.push(-1);
        vector<long long>ans(n);
        for(int i=n-1;i>=0;i--){
            int curr = arr[i];
            while(st.top()!=-1 && arr[st.top()]>=curr){
                st.pop();
            }
           ans[i]=st.top();
           st.push(i);
        }
        return ans;
        
    }
    
    vector<long long>prevSmallerElement(long long arr[],int n){
        stack<long long>st;
        st.push(-1);
        vector<long long>ans(n);
        for(int i=0;i<n;i++){
            int curr = arr[i];
            while(st.top()!=-1 && arr[st.top()]>=curr){
                st.pop();
            }
           ans[i]=st.top();
           st.push(i);
        }
        return ans;
    }
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long>next(n);
        next = nextSmallerElement(arr,n);
        
        vector<long long>prev(n);
        prev = prevSmallerElement(arr,n);
        
        long long area = INT_MIN;
        for(int i=0;i<n;i++){
            long long length = arr[i];
            if(next[i]==-1){
                next[i]=n;
            }
            long long  breadth = next[i]-prev[i]-1;
            long long  newArea = length*breadth;
            area=max(area,newArea);
        }
        
        return area;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends