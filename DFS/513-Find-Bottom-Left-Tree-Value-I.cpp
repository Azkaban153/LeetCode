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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode *> q;
        q.push(root);
        TreeNode *answer = NULL;
        
        while(!q.empty()){
        	int size = q.size();
        	answer = q.front(); //Leftmost node on each level

        	while(size--){
        		TreeNode *front = q.front();
        		q.pop();

        		if(front->left){
        			q.push(front->left);
        		}

        		if(front->right){
        			q.push(front->right);
        		}

        	}

        }
        
        return answer->val;
    }
};