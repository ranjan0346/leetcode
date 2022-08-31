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
    int length(ListNode* head){
        int cnt=0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        else if(head->next==NULL) return head;
        int cnt=length(head);
        k=cnt>k? k: k%cnt;
        
        while(k--){
            ListNode* last = head, *sLast;
            while(last->next->next!=NULL){
                last=last->next;
                }
            sLast=last;
            last=last->next;
            sLast->next=NULL;
            last->next=head;
            head=last;
            
        }
        return head;
        
    }
};