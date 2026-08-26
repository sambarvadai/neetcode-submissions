class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightView;
        queue<TreeNode*> myQueue;
        if(root == nullptr)
        {
            return {};
        }
        //Once we create the queue, then we do bfs
        myQueue.push(root);
        while(!myQueue.empty())
        {
            int queueSize = myQueue.size();
            while(queueSize>0)
            {
                TreeNode* node;
                node = myQueue.front();
                if(queueSize==1)
                {
                    rightView.push_back(node->val);        
                }
                myQueue.pop();
                if(node->left !=nullptr)
                {
                    myQueue.push(node->left);
                }
                if(node->right !=nullptr)
                {
                    myQueue.push(node->right);
                }
                queueSize--;
            }
        }
        return rightView;
    }
};