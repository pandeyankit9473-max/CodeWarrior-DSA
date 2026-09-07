class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;

        for (char c : s) {

            if (c == '(') {
                low++;
                high++;
            }

            else if (c == ')') {
                low--;
                high--;
            }

            else { // '*'
                low--;
                high++;
            }

            // Even maximum balance is negative
            if (high < 0)
                return false;

            // Minimum balance cannot be negative
            low = max(0, low);
        }

        return low == 0;
    }
};