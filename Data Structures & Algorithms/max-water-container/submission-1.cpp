class Solution {
public:
    int maxArea(vector<int>& heights) {
     int left = 0, right = heights.size()-1;
     int maxVol = INT_MIN;
     while(left<=right) 
     {
        maxVol = max(maxVol,((right-left)*(min(heights[left],heights[right]))));
        if(heights[left]<heights[right])
        {
            left++;
        }
        else
        {
            right--;
        }
     }  
     return maxVol;
    }
};
