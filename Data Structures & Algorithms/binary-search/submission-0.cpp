class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end=nums.size()-1;
        while(start<=end)
        {
            int middle = end+(start-end) /2;
            if(nums[middle]==target)
            {
                return middle;
            }
            if(nums[middle]<target)
            {
                start = middle+1;
            }
            else
            {
                end = middle-1;
            }
        }
        return -1;
    }
};
