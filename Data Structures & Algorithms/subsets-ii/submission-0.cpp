class Solution {
public:
vector<vector<int>> subsets;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> combinations;
        //in this backtracking we might have to pass in the index too since we want to stop the combination
        backTrackHelper(nums,combinations,0);
        return subsets;
    }
    void backTrackHelper(vector<int>& nums,vector<int>& combinations,int idx){
        //terminating condition
        if(idx == nums.size())
        {
            subsets.push_back(combinations);
            return;
        }
        int nextIdx = idx+1;
        while(nextIdx<nums.size() && nums[idx]==nums[nextIdx])
        {
            nextIdx++;
        }
        backTrackHelper(nums,combinations,nextIdx);
        combinations.push_back(nums[idx]);
        backTrackHelper(nums,combinations,idx+1);
        combinations.pop_back();
    }
};
