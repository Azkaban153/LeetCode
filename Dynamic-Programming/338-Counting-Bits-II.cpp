class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1,0);
        int prev_pow_of_2 = 1;

        for(int i=1; i<dp.size(); i++){
        	if(prev_pow_of_2*2 == i){
        		prev_pow_of_2 *= 2;
        	}

        	dp[i] = dp[i-prev_pow_of_2] + 1;
        }

        return dp;
    }
};