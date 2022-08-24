class Solution {
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 }; 
public:
    ListNode* find_FirstHalfEnd(ListNode* head){
        ListNode* sptr=head;
        ListNode* fptr=head;
        while(fptr->next!=nullptr && fptr->next->next!=nullptr){
            sptr=sptr->next;
            fptr=fptr->next->next;
        }
        return sptr;
    }
    
    ListNode* Reverse(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (curr != nullptr) {
            ListNode *nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return true;
        
        ListNode *FirstHalfEnd = find_FirstHalfEnd(head);
        ListNode *SecondHalfStart = Reverse(FirstHalfEnd->next);
        
        ListNode *l1 = head;
        ListNode *l2 = SecondHalfStart;
        
        while(l2!=nullptr){
            if(l1->val != l2->val){
                FirstHalfEnd->next = Reverse(SecondHalfStart);
                return false;
            }                
            l1=l1->next;
            l2=l2->next;
        }
        
        FirstHalfEnd->next = Reverse(SecondHalfStart);
        return true;
        
        }
};