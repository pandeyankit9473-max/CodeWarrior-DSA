class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>>v(123);
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            v[ch].first=ch; // its character for ex for 't' at v[ch]=116..at 116
            v[ch].second++; // its freq at 116 now(t,1)
        }
        auto lambda= [&](pair<char,int>&a ,pair<char,int>b){
            return a.second>b.second;
        };
        sort(v.begin(),v.end(),lambda);
        string res="";
        for(int i=0;i<123;i++){
            char ch=v[i].first;
            int frq=v[i].second;
            for(int j=0;j<frq;j++)
            res+=ch;
        }
        return res;
    }
};
//ASCII vector → frequency count → sort by freq → repeat char freq times..
// v[116].first = 't'
// v[116].second++

// Vector state:

// 116 → ('t',1)