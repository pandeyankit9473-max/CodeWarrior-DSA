class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;
        unordered_map<string ,function<int (int ,int) >>mp = {
            {"+" , [](int a , int b) {return a+b;}},
             {"-" , [](int a , int b) {return a-b;}},
              {"*" , [](int a , int b) {return (long) a * (long)b;}},
               {"/" , [](int a , int b) {return a/b;}},
        };

        for(string s : tokens){
            //if(mp.count(s)) ye bhi use kar sakte hai ...
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                
                int b = st.top();
                st.pop();
                
                int a = st.top();
                st.pop();
            int result = mp[s](a,b);
            st.push(result);
              
            }
            else{
                st.push(stoi(s)); // string → int
            }
        }

        return st.top();
    }
};
//   if(s == "+") st.push(a + b);
//   else if(s == "-") st.push(a - b);
//   else if(s == "*") st.push(a * b);
//   else st.push(a / b);