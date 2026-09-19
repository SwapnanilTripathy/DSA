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
    int depth(TreeNode* root){
        if(!root) return 0;
        int ct1=depth(root->left);
        int ct2=depth(root->right);
        if(!root->left) return 1+ct2;
        if(!root->right) return 1+ct1;
        return 1+min(ct1,ct2);
    }
    int minDepth(TreeNode* root) {
        return depth(root);
    }
};