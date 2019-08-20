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
    int findTilt(TreeNode* root) {
        int answer = 0;
        if(root){
        	postorder(root,&answer);
        }
        return answer;
    }

private:
	void postorder(TreeNode *root, int *answer){
		if(!root){
			return;
		}

		int left_tilt = postorder(root->left,answer);
		int right_tilt = postorder(root->right,answer);
		*answer += abs(left_tilt-right_tilt);

		return left_tilt + right_tilt + root->val;
	}
};