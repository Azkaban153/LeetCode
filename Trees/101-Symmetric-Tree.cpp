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
    bool isSymmetric(TreeNode* root) {
        if(root){
        	return _isSymmetric(root->left,root->right);
        }
        return true;
    }

private:
	bool _isSymmetric(TreeNode *left, TreeNode *right){
		if(!left || !right){
			return (left==right);
		}

		return ( (left->val == right->val) && _isSymmetric(left->left,right->right) && _isSymmetric(left->right,right->left) );
	}
};