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
    int maxDepth(Node* root) {
    	int answer = 0;
    	if(!root){
    		return answer;
    	}
    	queue<Node *> q;
    	q.push(root);

    	while(!q.empty()){
    		int size = q.size();
    		while(size--){
    			Node * temp = q.front();
    			q.pop();
    			for(auto node : temp->children){
    				q.push(node);
    			}
    		}
    		answer++;
    	}

    	return answer;
    }
};