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
   
    ListNode* solve(ListNode* list1, ListNode* list2){
        
        if(list1->next==NULL){
            list1->next=list2;
            return list1;
        }
        
        ListNode* curr1=list1;
        ListNode* next1=list1->next;
        
        ListNode* curr2=list2;
        ListNode* next2=list2->next;
        
        while( next1 != NULL && curr2 !=NULL ){
            
            if(curr1->val <= curr2->val && curr2->val <= next1->val){
                
                //attach the node to the main list
                curr1->next=curr2;
                next2=curr2->next;
                curr2->next=next1;
                
                //to increment the pointers
                curr1=curr2;
                curr2=next2;
                }
            else{
                curr1=curr1->next;
                next1=next1->next;
                
                //if 1st node ends insert all remain to 1st
                if(next1==NULL){
                    curr1->next=curr2;
                    return list1;
                }
            }
            
        }            
        return list1;
        
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        
        if(list1->val <= list2->val)
           return solve(list1,list2);
        else
            return solve(list2,list1);
        
        // return list1;
        
    }
};