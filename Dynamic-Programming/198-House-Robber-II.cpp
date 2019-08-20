class Solution {
public:
    int rob(vector<int>& nums) {
        if(!nums.size()){
            return 0;
        }
    	vector<int> dp(nums.size()+1,-1);
        dp[0] = 0;
        dp[1] = nums[0];

        for(int i=2; i<dp.size(); i++){
        	dp[i] = max(nums[i-1]+dp[i-2],dp[i-1]);
        }

        return max(dp[dp.size()-1],dp[dp.size()-2]);
    }
};