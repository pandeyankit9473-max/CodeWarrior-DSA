class Solution {
public:
    int expand(int left, int right, string s){
        while(left>=0 && right<s.size()){
            if(s[left]==s[right]){
                left--; right++;
            }
            else{
                break;
            }
            
        }
        return right-left-1; // length of pallindrome
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0; //Final answer ka starting index..
       // make every char as centre of pallindrome
       int maxlen=1;
       for(int i=0;i<n;i++){
        
        int oddlen=expand(i,i,s);
        int evenlen=expand(i,i+1,s);
        int len=max(oddlen,evenlen);
        if(len>maxlen){
            maxlen=len;
            start=i-(len-1)/2; // Starting index nikaal rahe hain
        }
       }
       return s.substr(start, maxlen);
    }
};