class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        vector<int>vec1(n,-1);
        vector<int>vec2(n,-1);
        int maxi = 0;
        for(int i = n-1;i>=0;i--){
            maxi = max(maxi,height[i]);
            vec1[i] = maxi;
        }
        maxi=0;
        for(int i = 0;i<n;i++){
            maxi = max(maxi,height[i]);
            vec2[i] = maxi;
        }
        for(int i=0;i<n;i++){
            ans += min(vec1[i],vec2[i])-height[i];
        }
        return ans;
    }
};
