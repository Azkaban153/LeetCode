class Solution {
public:
    int climbStairs(int n) {
    	vector<int> memo(n+1,1);
        return getCount(n,memo);
    }

private:
	int getCount(int n, vector<int> &memo){
    	if(n==0 || n==1){
    		return 1;
    	}

    	if(memo[n]==1){
    		memo[n] = ( getCount(n-1,memo) + getCount(n-2,memo) );
    	}
        
        return memo[n];
	}
};