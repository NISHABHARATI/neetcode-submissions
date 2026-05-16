class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto &it: s1){
            mp1[it]++;
        }
        int i=0,j=0;
        while(j<s2.length()){
            mp2[s2[j]]++;
            while(mp2[s2[j]]>mp1[s2[j]]){
                mp2[s2[i]]--;
                i++;
            }
            if(mp1==mp2)
            return true;
            j++;
        }
        return false;
    }
};
