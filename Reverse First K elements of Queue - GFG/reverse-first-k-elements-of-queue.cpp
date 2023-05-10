//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>st;
    int n=q.size();
    // take first k elements from queue and push to queue 
    for(int i=0;i<k;i++){
        int val = q.front();
        q.pop();
        st.push(val);
    }
    //pop the elements from stack and push back to queue 
    for(int i=0;i<k;i++){
        int val = st.top();
        st.pop();
        q.push(val);
    }
    //now pushback the remaining elements from the front to the back of the queue 
    for(int i=0;i<n-k;i++){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}