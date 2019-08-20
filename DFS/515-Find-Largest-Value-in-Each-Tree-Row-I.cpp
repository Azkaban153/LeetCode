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
    vector<int> largestValues(TreeNode* root) {
        vector<int> answer;
        if(!root){
        	return answer;
        }
        queue<TreeNode *> q;
        q.push(root);

        while(!q.empty()){
        	int size = q.size(), level_max = INT_MIN;
            
        	while(size--){
        		TreeNode *temp = q.front();
        		q.pop();
        		level_max = max(level_max,temp->val);
        		if(temp->left){
        			q.push(temp->left);
        		}
        		if(temp->right){
        			q.push(temp->right);
        		}
        	}

        	answer.push_back(level_max);
        }

        return answer;
    }
};