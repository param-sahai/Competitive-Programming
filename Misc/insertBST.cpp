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
void InOrderTraversal(Node *root){
    if(root!=NULL){
        InOrderTraversal(root->left);
        cout<<root->data<<" ";
        InOrderTraversal(root->right);
    }
}

void insertNode(Node* root,int val)
{
    Node *prev=NULL;
    while(root!=NULL){
        prev=root;
        if(root->data == val){
        cout<<"Same element can't be inserted"<<endl;
        return;
        }

        else if(val > root->data)
        root=root->right;

        else if(val < root->data)
        root=root->left;
    }
    
    Node *n=getNewNode(val);
    
    if(val > prev->data)
    prev->right=n;
    else
    prev->left=n; 
}


int main(){
    Node *n1=getNewNode(9);
    Node *n2=getNewNode(4);
    Node *n3=getNewNode(2);
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

    cout<<"Enter the element to be inserted ";
    int val=0;
    cin>>val;
    cout<<"Before Insertion"<<endl;
    InOrderTraversal(n1);
    cout<<endl;
    cout<<"After Insertion"<<endl;
    insertNode(n1,val);
    InOrderTraversal(n1);

return 0;
}