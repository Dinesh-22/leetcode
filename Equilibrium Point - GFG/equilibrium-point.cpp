//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int leftsum = 0;
        int rightsum = 0;
        for(int i=0;i<n;i++){
            rightsum+=a[i];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                rightsum-=a[i]; 
            }
            else{
                leftsum+=a[i-1];
                rightsum-=a[i];
            }
            if(leftsum==rightsum){
                return i+1;
            }
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends