class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = matrix.size();
        int n = matrix[0].size();
        int low = 0,high = matrix[0].size()-1;
        for(auto &vec:matrix){
            int first = vec[0], last = vec[n-1];
            if(first <= target && target <= last){
                while(low<=high){
                    int mid = low+(high-low)/2;
                    if(vec[mid]==target)return true;
                    else if(vec[mid]>target)high=mid-1;
                    else low = mid+1;
                }
            }
        }
        return false;
    }
};
