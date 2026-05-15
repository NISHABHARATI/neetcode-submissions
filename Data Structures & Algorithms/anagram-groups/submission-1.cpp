class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>answer;
        unordered_map<string,vector<string>>mp;
        for(auto &it : strs){
            string key = it;
            sort(begin(key),end(key));
            mp[key].push_back(it);
        }
        for(auto it: mp){
          answer.push_back(it.second);
        }
        return answer;
    }
};
