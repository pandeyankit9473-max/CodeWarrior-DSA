class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
    return false;
        string a=s.append(s);
        if(a.find(goal)!=string::npos)
        return true;
        else 
        return false;

        
    }
};