class Solution {
public:
    bool canAliceWin(int n) {
        int x=10;
        while(n>=x){
            n-=x;
             x--;
            
        }
        if(x%2==1) return true;
        return false;
    }
};