class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        long long int rev=0;
        while(x>0)
        {
            rev=rev*10+(x%10);
            x=x/10;
        }
        if(n==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};