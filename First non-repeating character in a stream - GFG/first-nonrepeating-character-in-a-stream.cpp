//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int>mp;
		    queue<char>q;
		    string ans = "";
		    for(int i=0;i<A.size();i++){
		        char ch = A[i];
		        //put the element in hash map
		        mp[ch]++;
		        //push the element in queue
		        q.push(ch);
		        //iterate through the queue 
		        while(!q.empty()){
		            if(mp[q.front()]>1){
		                q.pop();
		            }
		            else{
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends