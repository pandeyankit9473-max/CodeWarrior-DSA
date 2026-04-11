#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        stack<int> st;              // stack me indices store honge
        vector<int> ans(n);

        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() && temperatures[i] >= temperatures[st.top()]) {
                st.pop();
            }

            if(st.empty()) {
                ans[i] = 0;
            }
            else {
                ans[i] = st.top() - i;   // days ka difference
            }

            st.push(i);
        }

        return ans;
    }
};