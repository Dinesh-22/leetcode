//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0]==0) return -1;
        queue<pair<int,int>>q;
        int path = 0;
        vector<vector<bool>>vis(N,vector<bool>(M,false));
        q.push({0,0});
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto curr = q.front();
                q.pop();
                if(curr.first == X && curr.second == Y) return path;
                
                if(curr.first+1<N && !vis[curr.first+1][curr.second] && A[curr.first+1][curr.second]==1){
                    q.push({curr.first+1,curr.second});
                    vis[curr.first+1][curr.second]=true;
                }
                
                if(curr.first-1>=0 && !vis[curr.first-1][curr.second] && A[curr.first-1][curr.second]==1){
                    q.push({curr.first-1,curr.second});
                    vis[curr.first-1][curr.second]=true;
                }
                
                if(curr.second+1<M && !vis[curr.first][curr.second+1] && A[curr.first][curr.second+1]==1){
                    q.push({curr.first,curr.second+1});
                    vis[curr.first][curr.second+1]=true;
                }
                
                if(curr.second-1>=0 && !vis[curr.first][curr.second-1] && A[curr.first][curr.second-1]==1){
                    q.push({curr.first,curr.second-1});
                    vis[curr.first][curr.second-1]=true;
                }
            }
            path++;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends