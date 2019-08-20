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
    int distributeCoins(TreeNode* root) {
        int moves = 0;
        getMoves(root,moves);
        return moves;
    }

private:
	int getMoves(TreeNode *root, int &moves){
		if(!root){
			return 0;
		}

		int left = getMoves(root->left,moves);
		int right = getMoves(root->right,moves);

		moves += (abs(left) + abs(right));

		return root->val + left + right -1;
	}
};