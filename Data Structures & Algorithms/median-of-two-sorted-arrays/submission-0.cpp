class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        double ans=0;
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>result;
        while(i<n1 && j<n2){
            if(nums1[i]>=nums2[j]){
                result.push_back(nums2[j]);
                j++;
            }
            else{
                result.push_back(nums1[i]);
                i++;
            }
        }
        while(i<n1){
            result.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            result.push_back(nums2[j]);
            j++;
        }
        int n = result.size();
        int low =0,high = n-1;
        int mid = low+(high-low)/2;
        if(n%2 == 0){
              return (result[n/2 - 1] + result[n/2]) / 2.0;
        }
        else{
             ans = result[mid];
        }
    return ans;
    }
};
