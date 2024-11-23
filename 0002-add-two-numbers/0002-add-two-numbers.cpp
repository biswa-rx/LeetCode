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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> vt;
        int carry = 0;
        
        while(l1 != NULL && l2 != NULL) {
            int a = l1->val;
            int b = l2->val;
            int c = a+b+carry;
            
            vt.push_back(c%10);
            carry = c/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1 != NULL){
            int c = l1->val;
            c+= carry;
            vt.push_back(c%10);
            carry = c/10;
            l1 = l1->next;
        }
        while(l2 != NULL){
            int c = l2->val;
            c+= carry;
            vt.push_back(c%10);
            carry = c/10;
            l2 = l2->next;
        }
        
        if(carry != 0){
            vt.push_back(carry);
        }
        
        ListNode* head = new ListNode(vt[0]);
        
        ListNode* temp = head;
        
        for(int i = 1;i<vt.size();i++){
            temp->next = new ListNode(vt[i]);
            temp = temp->next;
        }
       
        return head;
    }
};