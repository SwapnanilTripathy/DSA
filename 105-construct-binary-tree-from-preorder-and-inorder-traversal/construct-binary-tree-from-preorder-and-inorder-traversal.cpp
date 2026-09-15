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
    TreeNode* build(vector<int>& preorder,vector<int>& inorder,int l,int r,int &i){
        if(l>r) return NULL;
        TreeNode* root=new TreeNode(preorder[i++]);
        int mid=l;
        while(inorder[mid]!=root->val) mid++;
        root->left=build(preorder,inorder,l,mid-1,i);
        root->right=build(preorder,inorder,mid+1,r,i);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int i=0;
        return build(preorder,inorder,0,inorder.size()-1,i);
    }
};