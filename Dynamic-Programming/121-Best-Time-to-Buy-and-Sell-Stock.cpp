class Solution {
public:
    int maxProfit(vector<int>& prices) {

		int answer = 0;
    	if(prices.size()){
			int local_min = prices[0];

			for(auto price : prices){
                local_min = min(local_min,price);
                answer = max(answer,price-local_min);
			}	
    	}

		return answer;
    }
};