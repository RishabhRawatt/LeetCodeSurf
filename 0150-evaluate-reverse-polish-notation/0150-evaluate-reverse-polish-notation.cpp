class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const auto& token : tokens) {
            if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))) {
                st.push(stoi(token));
            } else {
                int op2 = st.top(); st.pop();
                int op1 = st.top(); st.pop();

                if (token == "+") st.push(op1 + op2);
                else if (token == "-") st.push(op1 - op2);
                else if (token == "*") st.push(op1 * op2);
                else if (token == "/") st.push(op1 / op2);
            }
        }

        return st.top();
    }
};
