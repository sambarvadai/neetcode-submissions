class Solution {
    vector<vector<int>>results;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subsetContainer;
        backTrackHelper(nums, 0, subsetContainer);
        return results;
    }
    void backTrackHelper( vector<int>& nums, int idx, vector<int> subsetContainer)
    {
        //Base case
        if(idx == nums.size())
        {
            results.push_back(subsetContainer);
            return;
        }
        //Move forward without adding the element first
        backTrackHelper(nums, idx+1, subsetContainer);
        subsetContainer.push_back(nums[idx]);
        //Now call after including the element
        backTrackHelper(nums, idx+1, subsetContainer);
        // Now pop it
        subsetContainer.pop_back();
    }
};
