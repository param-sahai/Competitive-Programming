#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left = nullptr, *right = nullptr;
};
TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if(depth == 1){
        TreeNode* n = new TreeNode(val);
        n->left = root;
        return n;
    }        

    queue<TreeNode*>q;
    q.push(root);
    int curr_depth = 0;

    while(!q.empty()){
        int n = q.size();

        curr_depth++;
        while(n--){
            TreeNode* n  = q.front();
            q.pop();

            if(curr_depth!=depth-1){
                if(n->left!=nullptr)
                q.push(n->left);
                if(n->right!=nullptr)
                q.push(n->right);
            }
            else{
                TreeNode *insert = new TreeNode(val);
                insert->left = n->left;
                n->left = insert;

                //For right subtree
                TreeNode *insert1 = new TreeNode(val);
                insert1->right = n->right;
                n->right = insert1;
            }
        }
    }
    return root;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 return 0;
}