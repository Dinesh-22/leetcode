//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        priority_queue<pair<int,pair<int,int>>>maxHeap;
        set<pair<int,int>>st;
        
        maxHeap.push({a[n-1]+b[n-1],{n-1,n-1}});
        st.insert({n-1,n-1});
        
        vector<int>ans;
        
        while(k>0){
            pair<int,pair<int,int>>p = maxHeap.top();
            maxHeap.pop();
            
            int sum = p.first;
            int x = p.second.first;
            int y = p.second.second;
            
            ans.push_back(sum);
            
            if(st.find({x-1,y}) == st.end()){
                maxHeap.push({a[x-1]+b[y],{x-1,y}});
                st.insert({x-1,y});
            }
            
            if(st.find({x,y-1}) == st.end()){
                maxHeap.push({a[x]+b[y-1],{x,y-1}});
                st.insert({x,y-1});
            }
            k-=1;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends