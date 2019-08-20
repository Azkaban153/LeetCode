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
    int longestUnivaluePath(TreeNode* root) {
		int answer = 0;
		if(root){
			dfs(root,answer);
		}
		return answer;
    }

private:
	int dfs(TreeNode *root, int &answer){
		int left = (root->left) ? dfs(root->left,answer) : 0;
		int right = (root->right) ? dfs(root->right,answer) : 0;

		left = (root->left && root->left->val == root->val) ? left++ : 0;
		right = (root->right && root->right->val == root->val) ? right++ : 0;

		answer = max(answer,left+right);

		return max(left,right);
	}
};