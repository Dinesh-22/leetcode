/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&temp){
        if(root == NULL){
            return;
        }
        inorder(root->left,temp);
        temp.push_back(root->val);
        inorder(root->right,temp);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>temp;
        inorder(root,temp);
        if(temp.size()<=1) return temp;
        unordered_map<int,int>mp;
        int n = temp.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[temp[i]]++;
        }
        int maxi = 0;
        for(auto it: mp){
            maxi = max(maxi, it.second);
        }
        for(auto it:mp){
            if(it.second == maxi){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};