class Solution {
public:
    vector<vector<int>> answer;
    void solution(int n, int k,vector<int>&ans,int ind){
        if(k==0){
            answer.push_back(ans);
            return ;
        }
        if(k<0){
            return;
        }
        if(ind > n){
            return;
        }
        //pick
        if(ind <= n){
        ans.push_back(ind);
        solution(n,k-1,ans,ind+1);
        ans.pop_back();
        }
        solution(n,k,ans,ind+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ans;
        solution(n,k,ans,1);
        return answer;
    }
};