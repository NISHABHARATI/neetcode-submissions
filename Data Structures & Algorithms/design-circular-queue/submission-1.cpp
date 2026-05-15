class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = nullptr;
    }
};
class MyCircularQueue {
public:
    int space, nisha;
    ListNode* left = new ListNode(0);
    ListNode* right = left;
    MyCircularQueue(int k) {
        this->space = k;
        nisha = k;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        ListNode* newNode = new ListNode(value);
        right->next = newNode;
        right = newNode;
        space--;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())return false;
        left->next = left->next->next;
        space++;
        if(left->next == nullptr){
            right=left;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return left->next->val;   
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return right->val;
    }
    
    bool isEmpty() {
        if(space == nisha) return true;
        return false;
    }
    
    bool isFull() {
        if(space>0)return false;
        return true;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */