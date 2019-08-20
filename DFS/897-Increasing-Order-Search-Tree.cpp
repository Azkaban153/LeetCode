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
	TreeNode *dummy = new TreeNode(INT_MIN), *answer = dummy;
    TreeNode* increasingBST(TreeNode* root) {
        generateIncreasingBST(root);
        return answer->right;
    }

private:
	void generateIncreasingBST(TreeNode *root){
		if(!root){
			return;
		}

		generateIncreasingBST(root->left);
		dummy->right = new TreeNode(root->val);
		dummy = dummy->right;
		generateIncreasingBST(root->right);

	}
};