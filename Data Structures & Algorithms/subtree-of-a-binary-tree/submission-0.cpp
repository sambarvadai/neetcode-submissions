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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//Understand the solution. First check is that if there is no subroot we return true. An empty tree is always a sub tree
if(subRoot == nullptr)
{
        return true;
}
if(root == nullptr)
{
        return false;//Tree doesnt exist
}
        if(sameTree(root,subRoot))
        {
                return true;//If the tree structure is same
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);//If tree doesnt start from root we go to the children and check
    }
    bool sameTree(TreeNode* root, TreeNode* subRoot)
    {
        if(root==nullptr && subRoot==nullptr)
        {
                return true;//both have same values - or subtree doesnt exist
        }
        if(root && subRoot && root->val == subRoot->val)
        {
                return sameTree(root->left,subRoot->left) && 
                sameTree(root->right, subRoot->right);
        }
        return false;
    }
};
