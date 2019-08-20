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
    int sumOfLeftLeaves(TreeNode* root) {
        int answer = 0;
        inorder(root,&answer);
        return answer;
    }

    void inorder(TreeNode *root, int *answer){
    	if(!root){
    		return;
    	}

    	if(root->left && !root->left->left && !root->left->right){
    		*answer += root->left->val;
    	}

    	inorder(root->left,answer);
    	inorder(root->right,answer);
    }
};