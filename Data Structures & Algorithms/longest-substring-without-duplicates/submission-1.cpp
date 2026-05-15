class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int ans=0;
        int len = s.length();
        unordered_map<char,int>mpp;
        while(j<len){
            //computation
            mpp[s[j]]++;
            //removing false condition according to question
            while(mpp[s[j]]>1){
                mpp[s[i]]--;
                i++;
            }
            // ans is true 
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
