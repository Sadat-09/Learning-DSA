class Solution {
private:
   void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<int>>& grid,int delrow[],int delcol[]){
    int n=grid.size();
    int m=grid[0].size();
    vis[row][col]=1;

    for(int i=0 ;i<4;i++){
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];
        if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and !vis[nrow][ncol] and grid[nrow][ncol]==1){
             dfs(nrow, ncol, vis, grid, delrow, delcol);
        }
    }



   }



public:
    int numEnclaves(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1}; 
        for (int i = 0; i < n; i++) {

            if (!vis[i][0] and grid[i][0] == 1) {
                dfs(i, 0, vis, grid,delrow,delcol);
            }
             if (!vis[i][m-1] and grid[i][m-1] == 1) {
                dfs(i, m-1, vis, grid,delrow,delcol );
            }
        }
         for (int i = 0; i < m; i++) {

            if (!vis[0][i] and grid[0][i] == 1) {
                dfs(0, i, vis, grid,delrow,delcol);
            }
             if (!vis[n-1][i] and grid[n-1][i] == 1) {
                dfs(n-1, i, vis, grid,delrow,delcol );
            }
        }

        int count=0 ;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] and grid[i][j]==1) count++;
            }
        }
        return count;
    }
};