class Solution {
public:
    int evalRPN(vector<string>& tokens) {
           stack<int> st;
        for (const string& t : tokens) {
            if (t == "+") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                st.push(a + b);
            } else if (t == "-") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                st.push(a - b);
            } else if (t == "*") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                st.push(a * b);
            } else if (t == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                st.push(a / b); // integer division truncates toward zero in C++
            } else {
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};
