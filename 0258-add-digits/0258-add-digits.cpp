class Solution {
public:
    int addDigits(int num) {
    if(num == 0) return 0;
    return 1 + (num - 1) % 9;
}
};
// int calcdigit( int num){
//         if(num==0) return 0;
//        return num%10+calcdigit(num/10);
//     }
//     int addDigits(int num) {
//         if(num<10) return num;
//         return addDigits(calcdigit(num));
//     }