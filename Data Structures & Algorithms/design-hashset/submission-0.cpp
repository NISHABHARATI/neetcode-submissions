class MyHashSet {
public:
vector<int>arr;
    MyHashSet() {
        
    }
    
    void add(int key) {
        arr.push_back(key);
    }
    
    void remove(int key) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key){
                arr[i]=0;
            }
        }
    }
    
    bool contains(int key) {
        for(auto it: arr){
            if(it == key){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */