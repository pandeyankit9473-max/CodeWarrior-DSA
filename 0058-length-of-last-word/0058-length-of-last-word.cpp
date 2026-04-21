class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;

        // last ke spaces skip karo
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // last word count karo
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};