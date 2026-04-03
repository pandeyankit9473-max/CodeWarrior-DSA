class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string ans="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='(')
            {
                if(depth>0)
                    ans+=ch;
                    depth++;
            }
            else
            {
                depth--;
                if(depth>0)
                ans+=ch;
            }
        }
        return ans;
    }
};


// agar '(' hai:
//     depth>0 ho to add karo
//     phir depth++

// agar ')' hai:
//     pehle depth--
//     phir depth>0 ho to add karo