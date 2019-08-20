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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;

        if(root){
	        map<int,int> mapp;
	        queue<TreeNode*> q;

	        q.push(root);
	        int level = 0;

	        while(!q.empty()){
	        	int level_size = q.size();
	        	TreeNode *temp = NULL;
	        	while(level_size--){
	        		temp = q.front();
                    q.pop();
	        		if(temp->left){
	        			q.push(temp->left);
	        		}
	        		if(temp->right){
	        			q.push(temp->right);
	        		}
	        	}
	        	mapp[level++] = temp->val;
	        }

	        for(auto it = mapp.begin(); it != mapp.end(); it++){
	        	answer.push_back(it->second);
	        }
        }

        return answer;

    }
};