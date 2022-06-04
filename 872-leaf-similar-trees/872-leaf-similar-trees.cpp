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
    string s1, s2;
    
    void leaf(TreeNode* root, string &s){//inorder for tree1
        if(root==NULL) return;
        leaf(root->left,s);
        if(root->left==NULL && root->right==NULL)
           s+=to_string(root->val)+"#";
        leaf(root->right , s);
    }
    
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       leaf(root1, s1);
        leaf(root2, s2);
        return s1==s2;
        
    }
};