class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>vec;
        int j=0,left=0,right=0,mind=INT_MAX;
        deque<int>dq;
        int n = arr.size();
        for(int i=0;i<arr.size();i++){
            if(mind > abs(x-arr[i])){
                mind = abs(x-arr[i]);
                j = i;
            }
        }
        dq.push_back(arr[j]);
        left = j-1;
        right=j+1;
        k--;
        while(k>0){
            if(left >=0 && right < n){
                if(abs(x-arr[left]>abs(x-arr[right]))){
                    dq.push_back(arr[right]);
                    right++;
                }
                else{
                    dq.push_front(arr[left]);
                    left--;
                }
            }
            else if(right<n){
                dq.push_back(arr[right]);
                right++;
            }
            else if(left >=0 ){
                dq.push_front(arr[left]);
                left--;
            }
            k--;
        }
        
        for(auto &it : dq){
            vec.push_back(it);
        }
        return vec;
    }
};