class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>>v(123);
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            v[ch].first=ch;
            v[ch].second++;
        }
        auto lambda= [&](pair<char,int>&a ,pair<char,int>b){
            return a.second>b.second;
        };
        sort(v.begin(),v.end(),lambda);
        string res="";
        for(int i=0;i<123;i++){
            char ch=v[i].first;
            int frq=v[i].second;
            for(int i=0;i<frq;i++)
            res+=ch;
        }
        return res;
    }
};