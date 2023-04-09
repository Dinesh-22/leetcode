#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    priority_queue<pair<int,int>>maxHeap;
	    unordered_map<int,int>mp;
        vector<int>ans;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    for(auto it:mp){
	        maxHeap.push({it.second,(-1)*it.first});
	    }
	    while(!maxHeap.empty()){
	        int freq = maxHeap.top().first;
	        int ele = maxHeap.top().second;
	        for(int i=0;i<freq;i++){
	            ans.push_back(-1*ele);
	        }
	        maxHeap.pop();
	    }
	    for(auto it:ans){
	        cout<<it<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}