class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int groups = 0;
        if(!M.empty()){
        	groups = M.size();
        	vector<int> disjoint_set<M.size(),0>;

        	for(int i=0; i<disjoint_set.size(); i++){
        		disjoint_set[i] = i;
        	}

        	for(int i=0; i<M.size(); i++){
        		for(int j=i+1; j<M[i].size(); j++){
        			if(M[i][j]){
        				int parentI = find(disjoint_set,i);
        				int parentJ = find(disjoint_set,j);
        				if(parentI != parentJ){
        					disjoint_set[parentI] = parentJ;
        					groups--;
        				}
        			}
        		}
        	}

        }

        return groups;
    }

private:
	int find(vector<int> &disjoint_set, int x){
		return (disjoint_set[x] == x) ? x : find(disjoint_set,disjoint_set[x]);
	}
};