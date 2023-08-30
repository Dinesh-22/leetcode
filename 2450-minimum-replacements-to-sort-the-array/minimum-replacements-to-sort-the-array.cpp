class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();

        int prev = nums[n-1];

        for(int i=n-2;i>=0;i--){
            int numOfDel = nums[i]/prev;

            if(nums[i]%prev!=0){
                numOfDel++;
                prev = nums[i]/numOfDel;
            }
            ans+= (numOfDel-1);
        }
        return ans;

    }
};