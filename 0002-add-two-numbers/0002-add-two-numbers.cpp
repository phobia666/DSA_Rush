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
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        int carry = 0;
        int value = 0;

        ListNode* z = new ListNode();
        ListNode* t = z;

        while(p1 != NULL || p2 != NULL || carry == 1){
            if(p1 == NULL && p2 == NULL){
                value = carry;
            }
            else if(p1 == NULL){
                value = p2->val + carry;
                p2 = p2->next;
            }
            else if(p2 == NULL){
                value = p1->val + carry;
                p1 = p1->next;
            }
            else{
                value = p1->val + p2->val + carry;
                p1 = p1->next;
                p2 = p2->next;
            }
            if(value > 9){
                t->next = new ListNode((value % 10));
                carry = value / 10;
            }
            else{
                t->next = new ListNode(value);
                carry = 0;
            }
            t = t->next;
        }
        return z->next;
    }
};