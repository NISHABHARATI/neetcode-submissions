class Solution {
public:
    long long int check(long long int num,vector<int>& piles){
        long long int sum=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%num == 0){
                sum += piles[i]/num;
            }
            else{
                sum += piles[i]/num + 1;
            }
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int low=1,high=INT_MAX,ans=0;
        while(low<=high){
            long long int mid = low+(high-low)/2;
            if(check(mid,piles)<=h){
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
