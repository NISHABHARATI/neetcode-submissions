class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int ans = INT_MAX;
        int value = INT_MAX;
        vector<int>answer;
        for(int i=0;i<arr.size();i++){
            if(abs(arr[i]-x) < value){
                ans = i;
                value = abs(arr[i]-x);
            }
        }
        int i = ans-1;
        int j = ans+1;
        answer.push_back(arr[ans]);k--;
        while(k>0){
            if(i>=0 && j<arr.size()){
                if(abs(arr[i]-x) <= abs(arr[j]-x)){
                    answer.push_back(arr[i]);
                    i--;
                    k--;
                }
                else{
                    answer.push_back(arr[j]);
                    j++;
                    k--;
                }
            }
            else if(j < arr.size()){
                answer.push_back(arr[j]);
                j++;
                k--;
            }
            else{
                answer.push_back(arr[i]);
                i--;k--;
            }
        }
        sort(begin(answer),end(answer));
        return answer;
    }
};