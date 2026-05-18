class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        for(auto &it: a){
            bool flag = false;
            if(!st.empty() and it<0){
                while(!st.empty() && st.top()>0 and abs(it)>st.top()){
                    st.pop();
                }
                if(!st.empty() && st.top()>0){
                    if(abs(it) == st.top()){
                        st.pop();
                        flag = true;
                    }
                    else{
                        flag = true;
                    }
                }
            }
            if(!flag) st.push(it);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};