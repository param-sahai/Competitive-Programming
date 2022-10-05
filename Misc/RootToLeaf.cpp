#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
struct Node {
    int val=0;
    Node *left = nullptr;
    Node *right = nullptr;
};
void displayPath(vector<int>&order){
    for(auto x:order){
        cout<<x<<" ";
    }
    cout<<"\n";
}
bool isLeaf(Node *root){
    if(root->left == nullptr  && root->right==nullptr)
    return true;
    return false;
}
void rootToLeaf(Node* root, vector<int>&order){
    if(root==nullptr)
    return;
    if(isLeaf(root))
    {
        order.push_back(root->val);
        displayPath(order);
        order.pop_back();
        return;
    }
    else if(root!=nullptr){
        order.push_back(root->val);
        rootToLeaf(root->left, order);
        rootToLeaf(root->right, order);
        order.pop_back();
    }
}
int main()
{
Node *root=new Node();
Node *c1=new Node();
Node *c2=new Node();
Node *c3=new Node();
Node *c4=new Node();
Node *c5=new Node();
Node *c6=new Node();
Node *c7=new Node();
Node *c8=new Node();
root->val=1;
c1->val=2;
c2->val=3;
c3->val=4;
c4->val=5;
c5->val=6;
c6->val=7;
c7->val=8;
c8->val=9;

// root->left=c1;
// root->right=c2;
// c1->left=c3;
// c1->right=c4;
// c4->right=c5;
// c3->left=c6;
// c3->right=c7;
// c6->right=c8;
/////////
// root->left = c1;                 1
// root->right = c2;              2   3
// c2->right = c3;                      4
// c3->right = c4;                        5
// c4->right = c5;                          6
// c5->right = c6;                            7 
// c6->right = c7;                              8
// c7->right = c8; 
vector<int>order;
rootToLeaf(root, order);
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
 
 return 0;
}