class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string ans = "";
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(isalnum(ch)){
                ans+=tolower(ch);
            }
        }
        int start = 0, end = ans.size()-1;
        while(start<end){
            if(ans[start++]!=ans[end--]){
                return false;
            }
        }
        return true;
    }
};