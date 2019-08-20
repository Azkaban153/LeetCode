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
    bool isUnivalTree(TreeNode* root) {
        unordered_set<TreeNode *> sett;

        inorderTraversal(root,sett);

        return sett.size()==1;
    }

private:
	void inorderTraversal(TreeNode *root, unordered_set<TreeNode *> &sett){
		if(!root){
			return;
		}

		inorderTraversal(root->left,sett);
		sett.push(root);
		inorderTraversal(root->right,sett);
	}
};