//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int low=arr[0];
        for(int i=1;i<N;i++)
        {
            if(arr[i]>low)
            {
                low=arr[i];
            }
        }
        int high =0;
        for(int i=0;i<N;i++)
        {
            high+=arr[i];
        }
        int ans = low;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int n = no_of_subarrays_with_maxsum_as_mid(arr,N,mid);
            
            if(n>K)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                high = mid-1;
            }
        }
        return ans;
    }
    
    int no_of_subarrays_with_maxsum_as_mid(int arr[],int N,int mid)
    {
        int sum=0;
        int count=1;
        for(int i=0;i<N;i++)
        {
            if(sum+arr[i]>mid)
            {
                sum=arr[i];
                count++;
            }
            else
            {
                sum+=arr[i];
            }
        }
        return count;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends