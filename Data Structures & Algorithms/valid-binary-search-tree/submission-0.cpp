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
    bool isValidBST(TreeNode* root) {
        return isValid(root,LONG_MIN, LONG_MAX);//We select long min and long max, as the root value can be anything
    }
    bool isValid( TreeNode* root, long long left, long long right)
    {
        if(!root)
        {
            return true; //Either empty tree or we have traversed to the end of the tree
        }
        if(!(left < root->val && root->val < right)){
            return false;
        }
        return isValid(root->left,left,root->val) && isValid(root->right,root->val,right);
    }
};
