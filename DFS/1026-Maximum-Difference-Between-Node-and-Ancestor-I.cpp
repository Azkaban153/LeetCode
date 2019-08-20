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
	int answer = INT_MIN;
    int maxAncestorDiff(TreeNode* root) {
    	if(!root){
    		return 0;
    	}
    	_maxAncestorDiff(root,root->val);
    	maxAncestorDiff(root->left);
    	maxAncestorDiff(root->right);

    	return answer;
    }

private:
	void _maxAncestorDiff(TreeNode *node, int ancestor_value){
		if(!node){
			return;
		}

		answer = max(answer,abs(node->val-ancestor_value));
		_maxAncestorDiff(node->left,ancestor_value);
		_maxAncestorDiff(node->right,ancestor_value);
	}
};