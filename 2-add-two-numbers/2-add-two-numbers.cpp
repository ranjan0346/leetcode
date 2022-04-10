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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head= new ListNode(0);
        ListNode* mop=head;
        int carry=0;
        int sum=0;
        ListNode *temp1=l1, *temp2=l2;
        
        
        while (temp1!=NULL || temp2!=NULL){
            if(temp1==NULL && temp2!=NULL){
                sum=temp2->val+carry;
                temp2=temp2->next;
            }
            
            else if(temp1!=NULL && temp2==NULL){
                sum=temp1->val+carry;
                temp1=temp1->next;
            }
            else{
                sum=temp1->val +temp2->val +carry;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            
            carry= sum/10;
            sum%=10;
            
            ListNode* temp=new ListNode(sum);
            mop->next=temp;
            mop = mop->next;
        }
        if(carry>0){
             ListNode* t=new ListNode(carry);
            mop->next=t;
        }
        return head->next;
    }
};