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
    bool isCousins(TreeNode* root, int x, int y) {

		queue<TreeNode *> q;
		q.push(root);

		int depth = 0, depthX = 0, depthY = 0;
		TreeNode *parentX = root, *parentY = root;

		while(!q.empty()){
			int level_size = q.size();
			while(level_size--){
				TreeNode *temp = q.front();
				q.pop();
				if(temp->left){
					q.push(temp->left);
					if(temp->left->val == x){
						depthX = depth;
						parentX = temp;
					}
					if(temp->left->val == y){
						depthY = depth;
						parentY = temp;
					}
				}
				if(temp->right){
					q.push(temp->right);
					if(temp->right->val == x){
						depthX = depth;
						parentX = temp;
					}
					if(temp->right->val == y){
						depthY = depth;
						parentY = temp;
					}
				}
			}
			depth++;
		}

		return ( (depthX==depthY) && (parentX!=parentY) );
    }
};