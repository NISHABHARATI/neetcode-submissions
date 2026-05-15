class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<asteroids.size();i++){
        bool destroyed = false;
            int curr = asteroids[i];
               while(!st.empty() && st.top() > 0 && curr<0){
                if(st.top() < abs(curr)){
                    st.pop();
                }
                else if(st.top() == abs(asteroids[i])){
                    st.pop();
                    destroyed = true;
                    break;
                }
                else{
                     destroyed = true;
                    break;
                }
            }
            if(!destroyed) {
                st.push(curr);
            }
        }
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};