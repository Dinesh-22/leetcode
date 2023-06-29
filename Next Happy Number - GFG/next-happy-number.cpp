//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool solve(int N){
        if(N==1 || N==7) return true;
        if(N==2 || N==3 || N==4 || N==5 || N==6 || N==8 || N==9) return false;
        int squareSum = 0;
        while(N){
            int digit = N%10;
            squareSum+=(digit * digit);
            N=N/10;
        }
        return solve(squareSum);
    }
    int nextHappy(int N){
        // code here
        while(true){
            N++;
            if(solve(N)) return N;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends