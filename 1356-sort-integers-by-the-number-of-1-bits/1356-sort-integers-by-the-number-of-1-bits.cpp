class Solution {
public:

    int countonebits(int n){
        int cnt=0;
        while(n!=0){
            cnt+= n&1;
            n>>=1;
        }
        return cnt;
    }

    vector<int> sortByBits(vector<int>& a) {
        
        auto lambda=[&](int &a, int &b){
            int Ca=countonebits(a);
            int Cb=countonebits(b);
            if(Ca==Cb) return a<b;
            return Ca<Cb;
        };

        sort(a.begin(),a.end(),lambda);
        return a;
    }
};