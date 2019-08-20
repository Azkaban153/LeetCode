class Solution {
public:
    int climbStairs(int n) {
        int a = 1, b = 1, answer = 1;

        for(int i=2; i<=n; i++){
        	answer = a + b;
        	a = b;
        	b = answer;
        }

        return answer;
    }
};