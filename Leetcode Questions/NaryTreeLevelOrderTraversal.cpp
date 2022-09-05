class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        vector<int>v;
        if(root==nullptr)
        return res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node *n = q.front();
                v.push_back(n->val);
                q.pop();
                for(auto x:n->children){
                    q.push(x);
                }
            }
            res.push_back(v);
            v.clear();
        }
        return res;
    }
};