class Solution {
public:
    string convertToTitle(int col) {
        string result;
        while(col>0){
            col--; 
            int remin=col%26;
            char ch= remin+'A';
            result.push_back(ch);
            col=col/26; // removing last digits 

        }
        reverse(result.begin(),result.end());
        return result;
    }
};
//    col--; // this is important to handle the edge case of no like mutiple of 26 as it give the wrong ans..
