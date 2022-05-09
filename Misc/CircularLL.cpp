#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};





//Traversing the Circular ll
void showCircularLL(struct Node *head){
    struct Node *ptr=new Node();
    ptr=head;
    do{
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    while(ptr!=head);

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

int main()
{

  //Creating a Circular LL
  struct Node *head=new Node();
  struct Node *first=new Node();
  struct Node *second=new Node();
  struct Node *third=new Node();

    head->data=25;
  head->next=first;
    first->data=125;
  first->next=second;
    second->data=69;
  second->next=third;
    third->data=34;
  third->next=head;

  showCircularLL(head);


//Insertion in a CircularLl

struct Node* insert=new Node();
cout<<"Enter Index"<<endl;
int i=0;
cin>>i;
struct Node *inserted=insertAtIndex(head,78,i);
showCircularLL(inserted);

    return 0;
}