
class Solution {
public:
    int countMagicalPairs(string s) {
        int n = s.size();
        long long answer = 0;


        for (int j = 1; j < n; j++) {
            int leftFreq[27] = {};
            int rightFreq[27] = {};

            unordered_map<char, int> left;
            unordered_map<char, int> right;

            for (int i = j - 1; i >= 0; i--) {
                left[s[i]]++;
                leftFreq[left.size()]++;
            }

            for (int i = j; i < n; i++) {
                right[s[i]]++;
                rightFreq[right.size()]++;
            }

            for (int d = 1; d <= 26; d++) {
                answer += 1LL * leftFreq[d] * rightFreq[d];
            }
        }

        return answer;
    }
};