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
    ListNode* reverse(ListNode* l1){
        ListNode* prev = nullptr;
        ListNode* temp = l1;
        while(temp != nullptr){
            ListNode* dummy = temp->next;
            temp->next = prev;
            prev = temp;
            temp = dummy;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        if(fast != nullptr){
            prev=slow;
            slow=slow->next;
        }
        prev->next = nullptr;
        ListNode* l2 = reverse(slow);
        temp = head;
        while(l2 != nullptr && temp != nullptr){
            ListNode* store1 = temp->next;
            ListNode* store2 = l2->next;
            temp->next = l2;
            l2->next = store1;
            temp = store1;
            l2 = store2;
        }
       
    }
};
