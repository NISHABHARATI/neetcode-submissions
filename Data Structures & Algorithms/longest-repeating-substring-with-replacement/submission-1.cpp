class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0,j=0,len=0,mx=INT_MIN;
        unordered_map<char,int>mp;
        while(j<s.length()){
            mp[s[j]]++;
            mx = max(mx,mp[s[j]]);
            while(j-i+1-mx>k){
                mp[s[i]]--;
                i++;
            }
            len = max(len,j-i+1);
            j++;
        }
        return len;
    }
};
