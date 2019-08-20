class Solution {
public:
    int rob(vector<int>& nums) {
    	vector<int> memo(nums.size(),-1);
        return rob(nums,nums.size()-1,memo);
    }

private:
	int rob(vector<int> &nums, int index, vector<int> &memo){
		if(index<0){
			return 0;
		}

		if(memo[index]==-1){
			memo[index] = max(rob(nums,index-2,memo) + nums[index], rob(nums,index-1,memo));
		}

		return memo[index];
	}
};