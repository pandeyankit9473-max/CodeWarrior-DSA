class Solution {
public:
    string convertToTitle(int col) {
        string res;
        while(col>0){
            col--;
            int rem=col%26;
            char ch=rem+'A';
            res+=ch;
            col=col/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
//    col--; // this is important to handle the edge case of no like mutiple of 26 as it give the wrong ans..
