class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int j=0,sum=0;
        while(j<operations.size()){
            if(operations[j]== "+"){
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.push(num1);
                st.push(num1+num2);
            }
            else if(operations[j] == "C"){
                st.pop();
            }
            else if(operations[j]== "D"){
                int num = st.top();
                st.push(2*num);
            }
            else{
                 st.push(stoi(operations[j]));
            }
            j++;
        }
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};