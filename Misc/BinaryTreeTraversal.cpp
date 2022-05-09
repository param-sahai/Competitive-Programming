#include<iostream>

using namespace std;

struct Node{
int data;
struct Node *left;
struct Node *right;
};

Node* getNewNode(int data){
Node *n=new Node();
n->data=data;
n->left=NULL;
n->right=NULL;
return n;
}

void PreOrderTraversal(Node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}
void PostOrderTraversal(Node *root){
    if(root!=NULL){
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        cout<<root->data<<" ";
    }
}
void InOrderTraversal(Node *root){
    if(root!=NULL){
        InOrderTraversal(root->left);
        cout<<root->data<<" ";
        InOrderTraversal(root->right);
    }
}

int main(){
Node *n1=getNewNode(2);
Node *n2=getNewNode(1);
Node *n3=getNewNode(4);
Node *n4=getNewNode(11);
Node *n5=getNewNode(12);
Node *n6=getNewNode(3);

n1->left=n2;
n1->right=n3;

n2->left=n4;
n2->right=n5;

n3->left=NULL;
n3->right=n6;

cout<<"Pre-Order Traversal"<<endl;
PreOrderTraversal(n1);
cout<<endl;
cout<<"Post-Order Traversal"<<endl;
PostOrderTraversal(n1);
cout<<endl;
cout<<"In-Order Traversal"<<endl;
InOrderTraversal(n1);
cout<<endl;
return 0;
}