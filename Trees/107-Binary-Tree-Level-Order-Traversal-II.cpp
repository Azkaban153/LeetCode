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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answer;
        vector<int> level;

        queue<TreeNode *> q;

        if(root){

            q.push(root);

            while(!q.empty()){
                int size = q.size();
                level.clear();

                while(size--){
                    
                    TreeNode *front = q.front();
                    q.pop();
                    
                    level.push_back(front->val);

                    if(front->left){
                        q.push(front->left);
                    }
                    if(front->right){
                        q.push(front->right);
                    }
                }

                answer.push_back(level);
            }

            reverse(answer.begin(),answer.end());
        }


        return answer;

    }
};