/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode * d1=headA;
        ListNode * d2=headB;
        
        if(d1==NULL || d2==NULL) return NULL;
        
while(d1 != d2){
        d1=d1->next;
        d2=d2->next;
        
        if(d1==d2){
            if(d1==NULL){
            return NULL;
            }
            else{
                return d1;
            }
        }
        if(d1==NULL){
           d1=headA;
        }
        if(d2==NULL){
           d2=headB;
        }
    }
    return d1;
    }
};