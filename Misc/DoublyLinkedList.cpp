#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

void showDoublyLL(struct Node *head){
    struct Node *ptr=new Node();
    ptr=head;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main(){

struct Node *temp=new Node();
struct Node *head=temp;
cout<<"Enter the number of Nodes!"<<endl;
int n;
cin>>n;
for(int i=0;i<n;i++){
    struct Node *newNode= new Node();
    temp->next=newNode;
    cin>>newNode->data;
    temp=temp->next;
}
temp->next=NULL;
showDoublyLL(head);
return 0;
}