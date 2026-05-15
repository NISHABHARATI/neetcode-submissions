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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int cnt = 1;
        ListNode* req = new ListNode();
        ListNode* prev = new ListNode();
        ListNode* temp = head;
        while(temp != nullptr){
            if(cnt == left){
                req = temp;
            }
            if(cnt==right){
                    ListNode* helper = temp->next;
                    temp->next = nullptr;
                    ListNode* curr = reverse(req);
                    if(left == 1){
                        req->next=helper;
                        return curr;
                    }
                    else{
                        prev->next=curr;
                        req->next=helper;
                        return head;
                    }
                }
                if(cnt < left)
                prev = temp;
            temp = temp->next;
            cnt++;
        }
        return nullptr;
    }
};