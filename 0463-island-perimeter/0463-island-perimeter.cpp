class Solution {
public:
    long long peri=0;
    void dfs(vector<vector<int>>&grid, int row, int col){
        int m = grid.size();
        int n = grid[0].size();
        //we cant pugt that -1 retirn case here because yaha prr boundary condition ham check nho kar pa rahe hh samjhe na 

        if(row<0 || row>=m || col<0 || col>=n|| grid[row][col]==0){
             peri++;
             return; //we will return as well na bruhhh
        }

        if (grid[row][col] == -1) {
            return;
        }

        grid[row][col]=-1;

        dfs(grid,row-1,col);
        dfs(grid,row+1,col);
        dfs(grid,row,col-1);
        dfs(grid,row,col+1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j);
                     return peri; //here we should have to return the perimetere na bruhhh
                }
            }
        }
        return -1;
    }
};