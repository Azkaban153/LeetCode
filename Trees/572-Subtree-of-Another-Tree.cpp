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
    bool answer = false;
    bool isSubtree(TreeNode* s, TreeNode* t) {
		if(!s){
			return answer;
		}

		answer |= isSameTree(s,t);

		isSubtree(s->left,t);
		isSubtree(s->right,t);

		return answer;
    }

private:

	bool isSameTree(TreeNode *A, TreeNode *B){
		if(!A || !B){
			return (A==B);
		}

		return ( (A->val == B->val) && isSameTree(A->left,B->left) && isSameTree(A->right,B->right) );
	}
};