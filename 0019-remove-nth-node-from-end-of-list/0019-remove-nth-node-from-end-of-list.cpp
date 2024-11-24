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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL) {
            count++;
            temp = temp -> next;
        }
        
        if(count < n) {
            return head;
        }else if(count == n){
            return head->next;    
            
        }else{
            int remove = count - n;
            temp = head->next;
            int index = 1;
            ListNode* prev = head;
            while(temp != NULL) {
                if(remove == index) {
                    prev->next = temp->next;
                    // free(temp);
                    break;
                }
                prev = temp;
                temp = temp->next;
                index++;
            }
            return head;
        }
    }
};