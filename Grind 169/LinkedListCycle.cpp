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
    bool hasCycle(ListNode *head) {
     ListNode* curr=head;
     ListNode* curr2=head;

     while(curr2&&curr2->next){
         curr=curr->next;
         curr2=curr2->next->next;
         if(curr==curr2){
             return true;
         }
     }
     return false;
    }
};