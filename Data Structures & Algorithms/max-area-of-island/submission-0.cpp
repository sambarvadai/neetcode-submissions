class Solution {
    int maxArea = -1;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++)
            {
                area = 0;
                if(grid[i][j]==1 && !visited[i][j])
                {
                   area =  dfs(grid,visited,i,j,0);
                }
                maxArea = max(maxArea,area);
            }
            
        }
        return maxArea;
    }
    int dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int r,int c,int area)
    {
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size())
        {
            return 0;
        }
        if(grid[r][c]==0)
        {
            return 0;
        }
        if(visited[r][c])
        {
            return 0;
        }
        visited[r][c]=true;
        return 1+
        dfs(grid,visited,r-1,c,area)+
        dfs(grid,visited,r,c-1,area)+
        dfs(grid,visited,r+1,c,area)+
        dfs(grid,visited,r,c+1,area);
    }
};
