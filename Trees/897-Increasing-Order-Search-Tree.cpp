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
    TreeNode* increasingBST(TreeNode* root) {
        if(!root){
            return root;
        }
        vector<TreeNode *> inorder;
        populateInorder(root,inorder);

        TreeNode *answer = new TreeNode(INT_MIN), *dummy = answer;

        for(auto node : inorder){
        	dummy->right = new TreeNode(node->val);
        	dummy = dummy->right;
        }

        return answer->right;
    }

private:
	void populateInorder(TreeNode *root, vector<TreeNode *> &inorder){
		if(!root){
			return;
		}

		populateInorder(root->left,inorder);
		inorder.push_back(root);
		populateInorder(root->right,inorder);
	}
};