class Solution {
public:
    void dfs(vector<vector<int>>& grid,int row, int col,int& area){
        int m=grid.size();
        int n=grid[0].size();
        if(row<0||row>=m|| col<0 || col>=n|| grid[row][col]==0) return ;
        if(grid[row][col]==1){area++; grid[row][col]=0;}
        dfs(grid,row-1,col,area);
        dfs(grid,row+1,col,area);
        dfs(grid,row,col-1,area);
        dfs(grid,row,col+1,area);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxArea=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int area=0;
                   dfs(grid,i,j,area);
                   maxArea=max(maxArea,area);
                }
            }
        }
        return maxArea;
    }
};