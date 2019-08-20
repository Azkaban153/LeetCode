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
    TreeNode* invertTree(TreeNode* root) {
        postorder(root);
        return root;
    }

private:
	void postorder(TreeNode *root){
		if(!root){
			return;
		}
		postorder(root->left);
		postorder(root->right);
		swap(root->left,root->right);
	}

};