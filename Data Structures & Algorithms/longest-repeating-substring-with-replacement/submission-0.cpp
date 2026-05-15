class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0;
        int len = s.length();
        int maxTillNow=0,ans=0;
        unordered_map<char,int>mp;
        while(j<len){
            mp[s[j]]++;
            maxTillNow=max(maxTillNow,mp[s[j]]);
            while(j-i+1-maxTillNow > k){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
