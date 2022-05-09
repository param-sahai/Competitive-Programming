#include<iostream>

using namespace std;

struct Node{
int data;
struct  Node* next;
};

// struct Node* addListBegin(struct Node* ptr, int new_data){
//     struct Node* insert=new Node();
//     insert->data=new_data;
//     insert->next=ptr;
//     return insert;
// }

void addListEnd(struct Node* ptr, int new_data){
    struct Node* insert=new Node();
    ptr->next=insert;
    insert->data=new_data;
    insert->next=NULL;  
}

void showList(struct Node* ptr)
{
    while(ptr!=NULL){
    cout<<ptr->data<<endl;
    ptr=ptr->next;
    }
}

void deleteAtIndex(struct Node* head, int i){
    struct Node* ptr1=head;
    struct Node* ptr2=head->next;
    int count=1;
    if(i==0)
      {
        head=head->next;;
      }
    else{
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        }
}
int main(){

struct Node *head;

struct Node *second;
struct Node *third;

head=new Node();
second=new Node();

third=new Node();
struct Node * fourth=new Node();
head->data=25;
head->next=second;
second->data=14;
second->next=third;
third->data=99;
third->next=fourth;
fourth->data=144;
fourth->next=NULL;

showList(head);
cout<<"-----------"<<endl;

//head=addListBegin(head,69);

//Deleting node from the beginning

// head=head->next;
// showList(head);

//Deleting a node from the End

//Deleting a node at index I
cout<<"Enter the index"<<endl;
int i=0;
cin>>i;
deleteAtIndex(head,i);
showList(head);

return 0;
}