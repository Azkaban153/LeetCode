class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int answer = INT_MIN;
        int max_sum_so_far = 0;

        for(auto num : nums){
        	max_sum_so_far += num;
        	answer = max(answer,max_sum_so_far);
        	if(max_sum_so_far<0){
        		max_sum_so_far = 0;
        	}
        }

        return answer;
    }
};