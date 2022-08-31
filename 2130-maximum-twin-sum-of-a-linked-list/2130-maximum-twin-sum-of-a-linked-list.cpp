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
    int pairSum(ListNode* head) {
        if(head==NULL) return 0;
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        } 
        int ans=INT_MIN, n=v.size();
        
        for(int i=0; i<n/2; i++){
            ans=max(ans, v[i] + v[n-i-1]);
        }
        return ans;
    }
};