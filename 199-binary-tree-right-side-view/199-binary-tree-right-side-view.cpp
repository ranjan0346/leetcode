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
    vector<int> v;
    void reversePreOrder(TreeNode* root, int level){
        //reverse pre order is root, right, left
        if(root==NULL) return;
        if(level==v.size()) v.push_back(root->val);
        reversePreOrder(root->right, level+1);
        reversePreOrder(root->left, level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        reversePreOrder(root, 0);
        return v;
    }
};