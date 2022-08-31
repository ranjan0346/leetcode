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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *nodea, *nodeb, *temp=list1;
        int x=0;
        while(temp!=NULL){
            if(x==a-1) nodea=temp;
            if(x==b){
                nodeb=temp->next;
                break;
            }
            temp=temp->next;
            x++;
        }
        
            //merging
            nodea->next=list2;
            while(list2->next!=NULL) list2=list2->next;
            
            list2->next=nodeb;
        return list1;
        
        
    }
};