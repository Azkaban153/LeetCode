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
    int minDepth(TreeNode* root) {
        int answer = 0;

        if(root){    	
	        queue<TreeNode *> q;
	        q.push(root);
            answer++;

	        while(!q.empty()){
	        	int size = q.size();

	        	while(size--){
	        		TreeNode *temp = q.front();
	        		q.pop();

	        		if(!temp->left && !temp->right){
	        			return answer;
	        		}

	        		if(temp->left){
	        			q.push(temp->left);
	        		}

	        		if(temp->right){
	        			q.push(temp->right);
	        		}

	        	}
	        	answer++;
	        }
        }

        return answer;

    }
};