class Solution {
    vector<vector<int>> permutations;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> combination;
        vector<bool> visited(nums.size(),false);
        backTrackHelper(nums,combination,visited);
        return permutations;
    }
    void backTrackHelper(vector<int>& nums, vector<int>& combination, vector<bool>& visited)
    {
        if(combination.size() == nums.size())
        {
            permutations.push_back(combination);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(visited[i]){
                continue;//skip this element
            }
            visited[i] = true;
            combination.push_back(nums[i]);
            backTrackHelper(nums,combination,visited);
            combination.pop_back();
            visited[i] = false;
        }

    }
};
