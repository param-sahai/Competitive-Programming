#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
void showList(struct Node* ptr)
{
    while(ptr!=NULL){
    cout<<ptr->data<<endl;
    ptr=ptr->next;
    }
}
int deleteAtstart(struct Node* ptr){
    if(ptr==NULL){
    cout<<"Underflow!"<<endl;
    return 0;
    }
    else{
    ptr=ptr->next;
    return 1;
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
    int n=0;
    cout<<"Enter the number of Nodes to be created!"<<endl;
    cin>>n;
    struct Node *head=new Node();
    struct Node *prev=new Node();
    prev=head;    
    for(int i=0;i<n;i++){
        struct Node *node=new Node();
        prev->next=node;
        cout<<"Enter data for "<<i+1<<" Node"<<endl;
        cin>>node->data;
        prev=prev->next;
    }
    prev->next=NULL;
    cout<<endl;
    cout<<"-----------"<<endl;
    cout<<"Linked List is:"<<endl;
    showList(head->next);
    cout<<"-----------"<<endl;

    cout<<"Linked List after deleting Node at start"<<endl;
    if(deleteAtstart(head->next)==1)
    showList(head->next);

return 0;
}
