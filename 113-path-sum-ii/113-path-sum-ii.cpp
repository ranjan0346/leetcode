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
private:
    int sum=0;
    vector<int> v;
    vector<vector<int>> ans;
    
    void helper(TreeNode *root, int target){
        if(root ==NULL) return;
        v.push_back(root->val);
        sum+=root->val;
        
        if(sum==target && root->left==NULL && root->right==NULL)
            ans.push_back(v);
        
        helper(root->left, target);
        helper(root->right, target);
        
        sum-=root->val;
        v.pop_back();
        return;
        
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        helper(root, targetSum);
        return ans;
        
    }
};