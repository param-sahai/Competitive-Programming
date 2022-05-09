#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
};
void showList(struct ListNode* ptr)
{
    while(ptr!=NULL){
    cout<<ptr->val<<endl;
    ptr=ptr->next;
    }
}
ListNode* oddEvenList(ListNode* head) {
       ListNode* ptr=head->next;
       ListNode* ol=new ListNode();
       ListNode* el=new ListNode();
       ListNode* evenStart=el;
       ListNode* oddStart=ol;

       int count=0;
       while(ptr!=nullptr){
           count++;
           if( (count%2) != 0)
           {
               ol->next=ptr;
               ol=ol->next;
           }
           else if(count%2 == 0)
           {
               el->next=ptr;
               el=el->next;
           }
           ptr=ptr->next;
       }
        ol->next=evenStart->next;
        return oddStart->next;
    }

int main()
{
    cout<<"Inside main()";
    ListNode *head=nullptr;
    ListNode *first=new ListNode();
    ListNode *second=new ListNode();
    ListNode *third=new ListNode();
    ListNode *fourth=new ListNode();
    ListNode *fifth=new ListNode();
    ListNode *sixth=new ListNode();
    cout<<"Nodes created";
    first->val=11;
    second->val=12;
    third->val=13;
    fourth->val=14;
    fifth->val=15;
    sixth->val=16;
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    showList(first);
 return 0;

}