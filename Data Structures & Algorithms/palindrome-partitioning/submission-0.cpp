class Solution {
public:
vector<vector<string>>answer;
bool isPalindrome(string &s,int start,int end){
    while(start<=end){
        if(s[start++] != s[end--])return false;
    }
    return true;
}
    void solution(string &s,int ind,vector<string>&ans){
        if(ind == s.length()){
            answer.push_back(ans);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(isPalindrome(s,ind,i)){
                ans.push_back(s.substr(ind, i - ind + 1));
                solution(s,i+1,ans);
                ans.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>ans;
        solution(s,0,ans);
        return answer;
    }
};
