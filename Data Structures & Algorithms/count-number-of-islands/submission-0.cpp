class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1' && !visited[i][j])
                {
                    count++;
                    //call dfs on all neighbors
                    dfs(grid,visited,i,j);
                }
            }
        }
        return count;

    }
   void dfs(vector<vector<char>>& grid,vector<vector<bool>>& visited,int r,int c)
    {
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size())
        {
            return;
        }
        if(visited[r][c]){
            return;
        }
        if(grid[r][c]=='0')
        {
            return;
        }
    visited[r][c] = true;
    dfs(grid,visited,r-1,c);
    dfs(grid,visited,r,c-1);
    dfs(grid,visited,r+1,c);
    dfs(grid,visited,r,c+1);
    
    }
};
