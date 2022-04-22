/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* zero=new ListNode;
        zero->next= head;
        ListNode* last=zero , *first=zero;
        
        
        for(int i=1;i<=n; i++) last=last->next;
        
        while(last->next!=NULL){
            last=last->next;
            first=first->next;
        }
        first->next=first->next->next;
        return zero->next;
        
    }
};