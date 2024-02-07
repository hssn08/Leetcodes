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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        
      ListNode * head = list1;
        if(list1 -> val > list2 -> val)
        {
            head = list2;
            list2 = list2 -> next;
        }
        else
        {
            list1 = list1 -> next;
        }
    ListNode * ptr= head;

        for(int i=0;list1!=NULL&&list2!=NULL;i++){
            if(list1->val > list2->val){
                ptr->next=list2;
                list2=list2->next;
            }
            else{
                ptr->next=list1;
                list1=list1->next;
            }
            ptr=ptr->next;
        }

if(!list1)
            ptr -> next = list2;
        else
            ptr -> next = list1;


        return head;
    }
};