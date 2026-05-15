class Solution {
public:
    vector<vector<int>> answer;

    void solution(vector<int>& candidates, int target, vector<int>& ans, int ind) {
        if (target == 0) {
            answer.push_back(ans);
            return;
        }

        for (int i = ind; i < candidates.size(); i++) {
            // skip duplicates
            if (i > ind && candidates[i] == candidates[i - 1]) continue;

            if (candidates[i] > target) break;

            ans.push_back(candidates[i]);
            solution(candidates, target - candidates[i], ans, i + 1);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> ans;
        solution(candidates, target, ans, 0);
        return answer;
    }
};