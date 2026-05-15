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
        if(head == nullptr)return nullptr;
        ListNode* temp = head;
        int cnt=0;
        while(temp != nullptr){
            cnt++;
            temp = temp->next;
        }
        temp = head;
        int size = cnt-n-1;
        if(size<0)return head->next;
        while(size >0){
            temp = temp->next;
            size--;
        }
        ListNode* dummy = temp->next->next;
        ListNode* dummy1 = temp->next;
        delete dummy1;
        temp->next = dummy;
        return head;
    }
};
