//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int sum = 0;
        int max = INT_MIN;
        for(int i=0;i<N;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            sum+=arr[i];
        }
        int low = max;
        int high = sum;
        int ans=0;
        while(low <= high){
            int mid = (low+high)/2;
            if(fnc(mid,arr,N,D)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    }
    bool fnc(int mid,int arr[],int N,int D){
        int days = 1;
        int sum = 0;
        for(int i=0;i<N;i++)
        {
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else{
                sum=arr[i];
                days++;
            }
        }
        if(days<=D)return true;
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends