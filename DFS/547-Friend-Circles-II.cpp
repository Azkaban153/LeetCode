class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int groups = 0;

        if(!M.empty()){
        	vector<bool> visited(M.size(),false);

        	for(int i=0; i<visited.size(); i++){
        		if(!visited[i]){
        			dfs(i,visited,M);
        			groups++;
        		}
        	}

        }
        return groups;

    }

private:
	void dfs(int i, vector<bool> &visited, vector<vector<int>> &M){
		visited[i] = true;

		for(int j=0; j<M.size(); j++){
			if(M[i][j] == 1 && !visited[j]){
				dfs(j,visited,M);
			}
		}

	}
};