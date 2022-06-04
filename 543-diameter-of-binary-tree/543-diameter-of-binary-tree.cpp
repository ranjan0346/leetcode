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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(height(root->right),height(root->left));
    }
    int diameterOfBinaryTree(TreeNode* root) {
         if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh+rh, max(diameterOfBinaryTree(root->right), diameterOfBinaryTree(root->left)));
    }
};