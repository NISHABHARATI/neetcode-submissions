class MyHashSet {
public:
vector<int>data;
    MyHashSet() {}
    
    void add(int key) {
            if(find(begin(data),end(data),key) == data.end()){
                data.push_back(key);
        }
    }
    
    void remove(int key) {
        auto it = find(begin(data),end(data),key);
        if(it != data.end())
        data.erase(it);
    }
    
    bool contains(int key) {
       return find(begin(data),end(data),key) != data.end() ;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */