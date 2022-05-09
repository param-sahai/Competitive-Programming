#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct TreeNode{
int val;
TreeNode *left=nullptr;
TreeNode *right=nullptr;
};
queue<TreeNode *> q;
vector<int> v;
void PreOrderTraversal(TreeNode *root){
    if(root!=nullptr){
        cout<<root->val<<" ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

void BFS(TreeNode *root){
    TreeNode *pop, *l, *r;
    if(!q.empty()){
        pop=q.front();
        q.pop();
        v.push_back(pop->val);
        l=pop->left;
        r=pop->right;
        if(l!=nullptr)
        q.push(l);
        if(r!=nullptr)
        q.push(r);
    }
}
vector<int> BFS_traversal(TreeNode *root){
if(root==nullptr)
return v;

q.push(root);
BFS(root);
return v;

}
int main(){
TreeNode *root=new TreeNode();
TreeNode *c1=new TreeNode();
TreeNode *c2=new TreeNode();
TreeNode *c3=new TreeNode();
TreeNode *c4=new TreeNode();
TreeNode *c5=new TreeNode();
TreeNode *c6=new TreeNode();
root=nullptr;
root->val=1;
c1->val=2;
c2->val=3;
c3->val=4;
c4->val=5;
c5->val=6;
c6->val=7;

root->left=c1;
root->right=c2;
c1->left=c3;
c1->right=c4;
c2->left=c5;
c2->right=c6;

PreOrderTraversal(root);
return 0;
}