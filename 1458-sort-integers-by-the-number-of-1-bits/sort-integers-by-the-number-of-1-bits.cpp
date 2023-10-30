class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second) return a.first<b.first;
        else return a.second<b.second;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int a = arr[i];
            int cnt =0;
            while(a>0){
                cnt+=a&1;
                a=a>>1;
            }
            v.push_back({arr[i],cnt});
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>ans;
        for(auto it:v){
            ans.push_back(it.first);
        }
        return ans;
    }
};