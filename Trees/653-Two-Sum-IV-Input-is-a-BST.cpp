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
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        populateInorder(root,inorder);

        int left = 0, right = inorder.size()-1;

        while(left<right){
        	if(inorder[left]+inorder[right] == k){
        		return true;
        	} else if(inorder[left]+inorder[right] < k){
        		left++;
        	} else{
        		right--;
        	}
        }

        return false;
    }

private:
	void populateInorder(TreeNode *root, vector<int> &answer){
		if(!root){
			return;
		}

		populateInorder(root->left,answer);
		answer.push_back(root->val);
		populateInorder(root->right,answer);
	}
};