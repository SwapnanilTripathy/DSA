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
    map<int,TreeNode*> mpp;
    bool merge(TreeNode* root){
        if(!root) return true;
        if(!root->left&&!root->right&&mpp.count(root->val)){
            TreeNode* temp=mpp[root->val];
            mpp.erase(root->val);
            root->left=temp->left;
            root->right=temp->right;
        }
        return merge(root->left)&&merge(root->right);
    }
    bool check(TreeNode* root,long long l,long long r){
        if(!root) return true;
        if(root->val<=l||root->val>=r) return false;
        return check(root->left,l,root->val)&&check(root->right,root->val,r);
    }
    TreeNode* canMerge(vector<TreeNode*>& trees) {
        set<int> leaves;
        for(auto t:trees){
            mpp[t->val]=t;
            if(t->left) leaves.insert(t->left->val);
            if(t->right) leaves.insert(t->right->val);
        }
        TreeNode* root=NULL;
        for(auto t:trees){
            if(!leaves.count(t->val)){
                root=t;
                break;
            }
        }
        if(!root) return NULL;
        mpp.erase(root->val);
        merge(root);
        if(!mpp.empty()) return NULL;
        if(!check(root,LLONG_MIN,LLONG_MAX)) return NULL;
        return root;
    }
};