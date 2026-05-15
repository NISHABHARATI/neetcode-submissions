class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        vector<int> nextGreater(n, -1);
        vector<int> nextIndex(n, 0);
        stack<int> st;

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]<= nums[i])
        st.pop();
    if(!st.empty()){
        nextGreater[i] = nums[st.top()];
        nextIndex[i] = st.top();
    }
    st.push(i);
    }
    for(int i=0;i<n;i++)
    {
        if(nextIndex[i]==0){
            result.push_back(0);
        }
        else
        result.push_back(nextIndex[i]-i);
    }
    return result;
    }
};
