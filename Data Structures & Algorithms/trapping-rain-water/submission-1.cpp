class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();
    vector<int>left(n,-1);
    vector<int>right(n,-1);
    int maxL = INT_MIN;
    int maxR = INT_MIN;
    for(int i=n-1;i>=0;i--){
        maxR = max(maxR,height[i]);
        left[i] = maxR;
    }
    for(int i=0;i<n;i++){
        maxL = max(maxL,height[i]);
        right[i] = maxL;
    }
    int maxArea = 0;
    for(int i=0;i<n;i++){
        if(left[i]!= INT_MIN && right[i]!= INT_MIN)
        maxArea += abs(min(left[i],right[i]) - height[i]);
    }
    return maxArea;
    }
};
