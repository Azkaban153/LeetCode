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
    int maxAncestorDiff(TreeNode* root) {
        int max_val = INT_MIN, min_val = INT_MAX;

        return _maxAncestorDiff(root,max_val,min_val);
    }

private:
	// Calculate Max and Min along root to leaf paths
	// Return the difference after the leaf!
	int _maxAncestorDiff(TreeNode *root, int max_val, int min_val){
		if(!root){
			return max_val-min_val;
		}

		max_val = max(max_val,root->val);
		min_val = min(min_val,root->val);

		return max(_maxAncestorDiff(root->left,max_val,min_val),_maxAncestorDiff(root->right,max_val,min_val));

	}
};