class Solution {
public:
    int numEnclaves(vector<vector<int>>& A) {
    	int answer = 0;

        for(int i=0; i<A.size(); i++){
        	for(int j=0; j<A[0].size(); j++){
        		if( i*j==0 || i==A.size()-1 || j==A[0].size()-1 ){
        			dfs(A,i,j);
        		}
        	}
        }
        
        for(int i=0; i<A.size(); i++){
        	for(int j=0; j<A[0].size(); j++){
        		if( A[i][j] == 1){
        			answer++;
        		}
        	}
        }

        return answer;
    }

private:
	void dfs(vector<vector<int>> &A, int i, int j){
		if(i<0 || j<0 || i==A.size() || j==A[0].size() || A[i][j]!=1){
			return;
		}
		A[i][j] = 2;
		dfs(A,i+1,j);
		dfs(A,i-1,j);
		dfs(A,i,j+1);
		dfs(A,i,j-1);
	}
};