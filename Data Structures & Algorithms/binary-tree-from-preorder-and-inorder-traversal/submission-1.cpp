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
int pre_idx = 0;
public:
TreeNode* dfs(vector<int>& preorder, unordered_map<int,int>& myMap, int left, int right)
{
    if(left>right)
    {
        return nullptr; //Invalid condition or that we have reached leaf
    }
    int rootVal = preorder[pre_idx++];
    TreeNode* root = new TreeNode(rootVal);
    int midPt = myMap[rootVal];
    root->left = dfs(preorder,myMap,left,midPt-1);
    root->right = dfs(preorder, myMap,midPt+1,right);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> myMap;
        for(int i=0;i<inorder.size();i++)
        {
            myMap[inorder[i]] = i;
        }
        return dfs(preorder, myMap, 0,inorder.size()-1);
    }
};
