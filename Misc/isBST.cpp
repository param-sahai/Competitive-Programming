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

bool isBST(Node* root)
{
    static Node *prev = NULL;
     
    // traverse the tree in inorder fashion
    // and keep track of prev node
    if (root)
    {
        if (!isBST(root->left))
        return false;
 
        // Allows only distinct valued nodes
        if (prev != NULL &&
            root->data <= prev->data)
        return false;
 
        prev = root;
 
        return isBST(root->right);
    }
 
    return true;
}
void InOrderTraversal(Node *root){
    if(root!=NULL){
        InOrderTraversal(root->left);
        cout<<root->data<<" ";
        InOrderTraversal(root->right);
    }
}

int main(){
    Node *n1=getNewNode(9);
    Node *n2=getNewNode(4);
    Node *n3=getNewNode(12);
    Node *n4=getNewNode(7);
    Node *n5=getNewNode(5);
    Node *n6=getNewNode(8);
    Node *n7=getNewNode(11);
    Node *n8=getNewNode(19);
    Node *n9=getNewNode(14);

    n1->left=n2;
    n1->right=n7;

    n2->left=n3;
    n2->right=n4;

    n4->left=n5;
    n4->right=n6;
    
    n7->left=NULL;
    n7->right=n8;

    n8->left=n9;
    n8->right=NULL;

    
    InOrderTraversal(n1);

    if(isBST(n1)){
        cout<<endl<<"is BST"<<endl;
    }
    else{
        cout<<endl<<"is Not a BST"<<endl;
    }
return 0;
}