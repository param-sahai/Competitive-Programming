class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> answer;
        if(!root) return answer;  //if root is NULL then return
        queue<TreeNode*> q;  //for storing nodes
        q.push(root);  //push root initially to the queue
        while(!q.empty())  //while queue is not empty go and follow few steps
        {
            int size=q.size();
            double sz=size;
            long sum = 0;
            while(size--)  
            {
                TreeNode* temp=q.front();  //store front node of queue  and pop it from queue
                q.pop();
                sum+= temp->val;  //push it to v
                if(temp->left) q.push(temp->left);  //if left subtree exist for temp then store it into the queue
                if(temp->right) q.push(temp->right);  //if right subtree exist for temp then store it into the queue
            }
            answer.push_back(sum/sz);  //push v into answer, as v consist of all the nodes of current level
        }
        return answer;
    }
};