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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;

        populateLeaves(root1,leaves1);
        populateLeaves(root2,leaves2);

        return leaves1==leaves2;
    }

private:
	void populateLeaves(TreeNode *root, vector<int> &leaves){
		if(!root){
			return;
		}

		populateLeaves(root->left,leaves);
		if(!root->left && !root->right){
			leaves.push_back(root->val);
		}
		populateLeaves(root->right,leaves);

	}
};