class Solution {
    vector<vector<int>> results;
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> combinations;
        backTrackHelper(candidates,target,0,0,combinations);
        return results;
    }
    void backTrackHelper(vector<int>& candidates, int target, int idx, int combinationSum, vector<int>& combinations)
    {
      
        if(combinationSum == target)
        {
            results.push_back(combinations);
            return;
        }
        if(combinationSum > target)
        {
            return; //Invalid
        }
          if(idx == candidates.size())
        {
            return; // Index will go out of bounds;
        }
        int nextIdx = idx+1;
        while(nextIdx<candidates.size() && candidates[nextIdx]==candidates[idx])
        {
            nextIdx++;
        }
        backTrackHelper(candidates,target,nextIdx,combinationSum,combinations);
        combinationSum+= candidates[idx];
        combinations.push_back(candidates[idx]);
        backTrackHelper(candidates,target,idx+1,combinationSum,combinations);
        combinations.pop_back();
    }
};
