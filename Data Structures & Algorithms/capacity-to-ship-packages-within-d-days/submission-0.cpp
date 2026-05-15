class Solution {
public:
    int solution(int num,vector<int>& weights,int days){
        int sum=0,cnt=1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]>num){
                cnt++;
                sum = weights[i];
            }
            else{
                sum += weights[i];
            }
        }
        return cnt;
    }
    int shipWithinDays(vector<int>& weights, int days) {
         int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;

        while(low<=high){
            int mid = low+(high-low)/2;
        if(solution(mid,weights,days)<=days){
            ans = mid;
            high = mid-1;
        }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};