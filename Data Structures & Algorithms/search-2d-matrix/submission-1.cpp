class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            int start = 0;
            int end=matrix[i].size()-1;
            while(start<=end)
            {
                int middle = start+(end-start)/2;
                if(matrix[i][middle]==target)
                {
                    return true;
                }
                if(matrix[i][middle]>target)
                {
                    end=middle-1;
                }
                else
                {
                    start = middle+1;
                }
            }
        }
        return false;
    }
};
