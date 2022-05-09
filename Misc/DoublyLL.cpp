#include<iostream>

using namespace std;

struct Node{
struct Node *prev;
int data;
struct Node *next;
};

//Traversing the Circular ll
void showDoublyLL(struct Node *head){
    struct Node *ptr=new Node();
    ptr=head;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
void showDoublyLL_End(struct Node *last){
    struct Node *ptr=new Node();
    ptr=last;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->prev;
    }
}

struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = new Node();
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main(){
//Creating a Doubly Ended LL
  struct Node *head=new Node();
  struct Node *first=new Node();
  struct Node *second=new Node();
  struct Node *third=new Node();

        head->prev=NULL;
    head->data=25;
  head->next=first;
        first->prev=head;
    first->data=125;
  first->next=second;
        second->prev=first;
    second->data=69;
  second->next=third;
        third->prev=second;
    third->data=34;
  third->next=NULL;

  showDoublyLL(head);
  cout<<endl;
  showDoublyLL_End(third);
  cout<<"Enter index"<<endl;
  int i=1;
  cin>>i;
  insertAtIndex(head,7,i);

return 0;
}