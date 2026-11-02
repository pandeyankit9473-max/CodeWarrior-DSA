class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {

        if (value == 1)
            return -1;
        long long spf = value;
        for (int i = 2; 1LL * i * i <= value; i++) {
            if (value % i == 0) {
                spf = i;
                break;
            }
        }

        if (spf == value && index > 0)
            return -1;

        long long first = value;

        if (value % 2 == 0)
            first = value - 2 * index;
        else
            first = value - spf - 2 * (index - 1);

        if (first < 2)
            return -1;

         long long ans = value;

        if (value % 2 == 0)
            ans = value + 2LL*(n - index - 1);
        else
            ans = value + spf + 2LL * (n - index - 2);

        return ans;
    }
};