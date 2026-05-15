class Solution {
public:
vector<string>ans;
    void solution(string &digits,vector<vector<char>>&ch,int ind,string &s){
        if(ind == digits.length()){
            ans.push_back(s);
            return;
        }
        //pick
        int num = digits[ind]-'0';
        int sz = ch[num].size();
        for(int i=0;i<sz;i++){
            char test = ch[num][i];
            s.push_back(test);
            solution(digits,ch,ind+1,s);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<vector<char>>ch(10);
        ch[2] = {'a','b','c'};
        ch[3] = {'d','e','f'};
        ch[4] = {'g','h','i'};
        ch[5] = {'j','k','l'};
        ch[6] = {'m','n','o'};
        ch[7] = {'p','q','r','s'};
        ch[8] = {'t','u','v'};
        ch[9] = {'w','x','y','z'};
        string s ="";
        if(digits.length() == 0)return {};
        solution(digits,ch,0,s);
        return ans;
    }
};
