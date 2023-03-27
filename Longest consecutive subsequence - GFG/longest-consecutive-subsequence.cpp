//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int lastSmall = INT_MIN;
      int cnt = 0;
      int longest =1;
      sort(arr,arr+N);
      for(int i=0;i<N;i++){
         if(arr[i]-1 == lastSmall){
             cnt +=1;
             lastSmall = arr[i];
         }
         else if(arr[i]!=lastSmall){
             cnt = 1;
             lastSmall = arr[i];
         }
         longest = max(longest , cnt);
      }
      return longest;
    }
    
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends