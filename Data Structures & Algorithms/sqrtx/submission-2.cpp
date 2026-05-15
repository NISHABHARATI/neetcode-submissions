class Solution {
public:
    int mySqrt(int x) {
        if(x<=1){
            return x;
        }
        int low=1,high = floor((double)x/2.0);
        int ans = -1; 
        while(low<=high){
            long long int mid = low+(high-low)/2;
            if(mid*mid == x)return mid;
            else if(mid*mid > x)high = mid-1;
            else{
                ans = mid;
                low = mid+1;
            }
        }
        return ans;
    }
};