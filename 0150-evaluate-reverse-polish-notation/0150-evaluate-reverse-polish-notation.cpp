class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         

 //----------
//  stack<int> st;
//         int a;
//         int b;

//         for (string token : tokens) {
//             if (token == "+" || token == "-" || token == "*" || token == "/") {
//                 b = st.top();
//                 st.pop();
//                 a = st.top();
//                 st.pop();

//                 if (token == "+") {
//                     st.push(a + b);
//                 } else if (token == "-") {
//                     st.push(a - b);
//                 } else if (token == "*") {
//                     st.push(a * b);
//                 } else if (token == "/") {
//                     st.push(a / b);
//                 }
//             } else {
//                 st.push(stoi(token));
//             }
//         }
//         return st.top();
 //----------







        stack<int> st;

        for(string token : tokens) {

            if(token == "+" ||
               token == "-" ||
               token == "*" ||
               token == "/") {

                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if(token == "+")
                    st.push(a + b);

                else if(token == "-")
                    st.push(a - b);

                else if(token == "*")
                    st.push(a * b);

                else
                    st.push(a / b);
            }
            else {

                st.push(stoi(token));
            }
        }

        return st.top();
    }
};