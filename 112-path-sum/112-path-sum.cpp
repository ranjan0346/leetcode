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
        
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        sum+= root->val;
        if(sum==targetSum && root->right==NULL &&root->left==NULL) return true;
        if(hasPathSum(root->left, targetSum)  || hasPathSum(root->right, targetSum)) return true;
        sum-= root->val;
        return false;
    }
};