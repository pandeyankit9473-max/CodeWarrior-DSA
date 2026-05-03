class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
        return false; // as it is rotation len of both str must be same..
        string a=s.append(s);
        if(a.find(goal)!=string::npos)
        return true;
        else 
        return false;

        
    }
};