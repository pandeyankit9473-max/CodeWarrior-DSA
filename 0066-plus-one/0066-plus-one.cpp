class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
// 1️⃣ last digit se start karo
// 2️⃣ agar digit < 9 → +1 karo → return
// 3️⃣ agar digit = 9 → 0 bana do → next digit
// 4️⃣ agar sab digits 9 nikle → loop khatam
// 5️⃣ tab insert 1 at beginning