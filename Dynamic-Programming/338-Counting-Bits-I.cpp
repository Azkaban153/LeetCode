class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> answer;

        for(int i=0; i<=num; i++){
        	answer.push_back(countOnes(i));
        }

        return answer;
    }

private:
	int countOnes(int input){
		int count = 0;

		while(input){
			count += (input & 1);
			input >>= 1;
		}

		return count;
	}
};