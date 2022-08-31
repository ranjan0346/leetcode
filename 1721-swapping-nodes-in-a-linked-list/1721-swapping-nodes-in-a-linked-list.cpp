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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0,y=0;
        ListNode* temp= head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        
        ListNode* a, *b;
        temp=head;
        while(temp!=NULL){
            y++;
            if(y==k) a=temp;
            if(y==n-k+1){
                b=temp;
            } 
            temp=temp->next;
        }
        swap(a->val, b->val);
        return head;
        
    }
};