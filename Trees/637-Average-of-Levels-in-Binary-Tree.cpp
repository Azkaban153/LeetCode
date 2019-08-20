/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> answer;
        if(!root){
            return answer;
        }
        queue<TreeNode *> q;

        q.push(root);

        while(!q.empty()){
        	double average = 0;
        	int size = q.size();

        	for(int i=0; i<size; i++){
	        	TreeNode *temp = q.front();
	        	q.pop();
        		average += temp->val;
        		if(temp->left){
        			q.push(temp->left);
        		}
        		if(temp->right){
        			q.push(temp->right);
        		}
        	}

        	answer.push_back(average/(double)size);
        }

        return answer;
    }
};