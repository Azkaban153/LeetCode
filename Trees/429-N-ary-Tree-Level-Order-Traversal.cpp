/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> answer;
        if(!root){
            return answer;
        }
        queue<Node *> q;
        q.push(root);

        while(!q.empty()){
        	int size = q.size();
        	vector<int> level;
        	while(size--){
        		Node *temp = q.front();
        		q.pop();
                level.push_back(temp->val);
        		for(auto node : temp->children){
        			q.push(node);
        		}
        	}
        	answer.push_back(level);
        }

        return answer;
    }
};