class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int col = grid[0].size();
        int res = 0;
        for(int i=0;i<rows;i++) {
            
            for(int j=0;j<col;j++) {
                if(grid[i][j] == 1) {
                    res = max(res,maxAreaDFS(grid,i,j));
                }
            }
        }
        return res;
    }
    int maxAreaDFS(vector<vector<int>>&grid,int x, int y) {
        int res = 1;
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size()) {
            return 0;
        }
        if(grid[x][y] == 0) {
            return 0;
        }
        grid[x][y] = 0;
        
        res+=maxAreaDFS(grid,x+1,y);
        res+=maxAreaDFS(grid,x-1,y);
        res+=maxAreaDFS(grid,x,y+1);
        res+=maxAreaDFS(grid,x,y-1);
        return res;
    }
};