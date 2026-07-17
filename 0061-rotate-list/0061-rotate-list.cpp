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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* t = head;
        ListNode* ans = t;
        ListNode* realans = t;
        int n = 0;
        int cnt = 0;

        while(t != NULL){
            n++;
            t = t->next;
        }
        if(n == 0){
            return NULL;
        }
        if(k >= n){
            k = k % n;
        }
        if(k == 0){
            return head;
        }

        t = head;

        while(t != NULL){
            if(cnt == n - k - 1){
                ans = t->next;
                realans = t->next;
                t->next = NULL;
                break;
            }
            t = t->next;
            cnt++;
        }

        while(ans->next != NULL){
            ans = ans->next;
        }
        ans->next = head;
        return realans;

    }
};