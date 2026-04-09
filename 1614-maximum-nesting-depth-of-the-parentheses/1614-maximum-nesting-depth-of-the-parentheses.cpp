class Solution {
public:
    int maxDepth(string s) {
        
        int depth = 0;
        int maxDepth = 0;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '('){
                depth++;
                maxDepth = max(maxDepth, depth);
            }

            else if(s[i] == ')'){
                depth--;
            }
        }

        return maxDepth;
    }
};