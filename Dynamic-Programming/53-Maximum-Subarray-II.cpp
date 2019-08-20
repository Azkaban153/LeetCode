class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int answer = nums[0];
        vector<int> dp = nums;

        for(int i=1; i<dp.size(); i++){
            if(dp[i-1]<0){
                dp[i-1] = 0;
            }
            dp[i] += dp[i-1];
            answer = max(answer,dp[i]);
        }

        for(int i=0; i<dp.size(); i++){
            cout << dp[i] << " ";
        }

        return answer;
    }
};