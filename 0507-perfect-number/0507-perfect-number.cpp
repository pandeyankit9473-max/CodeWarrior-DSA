class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false; //we have to exclude the itself no..
        int sum=1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
            sum+=i;
            if(i!=num/i) // to remove duplicates (36=6*6)we take only one divsor
                sum+=num/i;
            }
        }
        return sum==num;
    }
};
// int sum=0;
//         for(int i=1;i<=num/2;i++){
//             if(num%i==0) sum+=i;
//         }
//         return sum==num;

// i did a simpe mistake here i shoul have to check both number simul...if cond