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
    ListNode* reverseKGroup(ListNode* head, int k) {

        
        ListNode * dummy =new ListNode(-1);
        dummy->next=head;
        
        ListNode * curr=dummy;
        ListNode * prev=dummy;
        ListNode * forw=dummy;
        //find length
        int count=0;
        while(curr->next)
        {
            curr=curr->next;
            count++;
        }
        
        while(count >= k){
            curr=prev->next;
            forw=curr->next;
       
            //reverse 
            for(int i=1;i<k;i++){
                curr->next=forw->next;
                forw->next=prev->next;
                prev->next=forw;
                forw=curr->next;
                
            }
            prev=curr;
            count-=k;
        }
        return dummy->next;
    }
};