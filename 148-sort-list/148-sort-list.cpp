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
    ListNode* sortList(ListNode* head) {
        
        vector<int>listo;
        
        ListNode * temp=head;
        
        while(temp !=NULL){
            
            listo.push_back(temp->val);
            temp=temp->next;
        }
        
        sort(listo.begin(),listo.end());
        
        temp=head;
        int i=0;
        while(temp !=NULL){
            
            temp->val=listo[i];
            i++;
            temp=temp->next;
        }
        
        return head;
    }
};