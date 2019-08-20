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
    int minDiffInBST(TreeNode* root) {
        if(!root){
        	return 0;
        }

        vector<int> inorder;
        populateInorder(root,inorder);
        int answer = INT_MAX;

        for(int i=1; i<inorder.size(); i++){
        	answer = min(answer,inorder[i]-inorder[i-1]);
        }

        return answer;
    }
    
private:
	void populateInorder(TreeNode *root, vector<int> &inorder){
		if(!root){
			return;
		}

		populateInorder(root->left,inorder);
		inorder.push_back(root->val);
		populateInorder(root->right,inorder);
	}
};