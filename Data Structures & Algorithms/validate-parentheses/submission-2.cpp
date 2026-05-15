class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int j=0;
        while(j<s.length()){
            if(s[j]==')'|| s[j]=='}'|| s[j]==']'){
                if (st.empty()) return false;
                char s1 = st.top();
                if(s[j]==')'&& s1 != '(')return false;
                if(s[j]=='}'&& s1 != '{')return false;
                if(s[j]==']'&& s1 != '[')return false;
                st.pop();
            }
            else{
                st.push(s[j]);
            }
            j++;
        }
         return (st.empty())? true:false;
    }
};
