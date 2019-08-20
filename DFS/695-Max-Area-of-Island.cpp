class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int answer = 0;
        int rows = grid.size(), columns = grid[0].size();

        for(int i=0; i<rows; i++){
        	for(int j=0; j<columns; j++){
        		if(grid[i][j] == 1){
        			answer = max(answer,dfs(grid,i,j));
        		}
        	}
        }

        return answer;
    }

private:
	int dfs(vector<vector<int>> &grid, int i, int j){
		if(i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1 ){
			grid[i][j] = 2;
			return 1 + dfs(grid,i,j+1) + dfs(grid,i,j-1) + dfs(grid,i+1,j) + dfs(grid,i-1,j);
		}
		return 0;
	}
};