class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>vec;
        int j=0,left=0,right=0,mind=INT_MAX;
        int n = arr.size();
        for(int i=0;i<arr.size();i++){
            if(mind > abs(x-arr[i])){
                mind = abs(x-arr[i]);
                j = i;
            }
        }
        vec.push_back(arr[j]);
        left = j-1;
        right=j+1;
        k--;
        while(k>0){
            if(left >=0 && right < n){
                if(abs(x-arr[left]>abs(x-arr[right]))){
                    vec.push_back(arr[right]);
                    right++;
                }
                else{
                    vec.push_back(arr[left]);
                    left--;
                }
            }
            else if(right<n){
                vec.push_back(arr[right]);
                right++;
            }
            else if(left >=0 ){
                vec.push_back(arr[left]);
                left--;
            }
            k--;
        }
        sort(begin(vec),end(vec));
        return vec;
    }
};