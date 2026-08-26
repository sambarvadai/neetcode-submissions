class Solution {
    vector<vector<int>> results;
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> combination;
        backTrackHelper(0,combination,0,target, nums);
        return results;
    }
    void backTrackHelper(int curSum,vector<int>& combination, int idx, int target, vector<int>& nums)
    {
         //Index out of bounds
        if(idx == nums.size() || curSum>target)
        {
            return;
        }
        //Base case
        if(curSum==target){
            results.push_back(combination);
            return;
        }
        //2nd case
        //Skip this element
        backTrackHelper(curSum,combination,idx+1,target,nums);
        //Now add it to the sum
        curSum+= nums[idx];
        combination.push_back(nums[idx]);
        backTrackHelper(curSum, combination, idx, target,nums);
        combination.pop_back();
    }
};
