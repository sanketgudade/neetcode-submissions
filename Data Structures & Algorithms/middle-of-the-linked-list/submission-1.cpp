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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;

        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
      
      int counter=0;
      while(temp!=NULL){
         counter=counter+1;
         temp=temp->next;
      }
         
         int middle=counter/2;
 
         ListNode* tracker=head;
         for(int i=1;i<=middle;i++){
           tracker=tracker->next;
         }

         return tracker;
    }
};