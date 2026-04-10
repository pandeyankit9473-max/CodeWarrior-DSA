class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0 ;
        while(i<n && s[i]==' ') i++;
        int sign=1;
        if(i<n && (s[i]=='+' || s[i]=='-')){ // taking sing either + or -
            if(s[i]=='-') sign=-1;
            i++;
        }
        long long nums=0; // for making digits..
        while(i<n && isdigit(s[i])){
            int digit=s[i]-'0';
            nums=nums*10+digit;
            if(sign*nums>INT_MAX) return INT_MAX;
            if(sign*nums<INT_MIN) return INT_MIN;
// this is handling the edge case when num became as per the question...
            i++;
        }
        return nums*sign;
    }
};