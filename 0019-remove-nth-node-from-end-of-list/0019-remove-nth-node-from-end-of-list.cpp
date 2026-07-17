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
        ListNode* t = head;
        int length = 0;
        long long cnt = 1;

        while(t != NULL){
            length++;
            t = t->next;
        }
        t = head;

        if(length == 1){
            return NULL;
        }
        if(length - n == 0){
            return head->next;
        }

        while(t != NULL){
            if(cnt == length - n){
                t->next = t->next->next;
                return head;
            }
            t = t->next;
            cnt++;
        }
        return head;

    }
};