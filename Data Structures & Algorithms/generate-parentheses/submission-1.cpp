class Solution {
public:
    vector<string> ans;
    void solution(int n,string &s,int ind){
        if(n == 0){
            if(ind == 0){
               ans.push_back(s);
            }
               return; 
        }
        s += "(";
        solution(n-1,s,ind+1);
        s.pop_back();
        if(ind > 0){
        s += ")";
        solution(n-1,s,ind-1);
        s.pop_back();
    }
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        solution(n*2,s,0);
        return ans;
    }
};
