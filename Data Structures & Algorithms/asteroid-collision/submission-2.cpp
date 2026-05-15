class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;
        int n = asteroids.size();
        for(int i=0;i<n;i++){
            int curr = asteroids[i];
            bool destroyed = false;
            //right ->+ve and left ->-ve
            while(!st.empty() && st.top()>0 && curr<0){
                if(st.top() > abs(curr)){
                    destroyed = true;
                    break;
                }
                else if(st.top() == abs(curr)){
                    st.pop();
                    destroyed = true;
                    break;
                }
                else{
                    st.pop();
                }
            }
                   if(!destroyed){
                    st.push(curr);
                }
        }
            while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
            }
            reverse(begin(ans),end(ans));
            return ans;
    }
};