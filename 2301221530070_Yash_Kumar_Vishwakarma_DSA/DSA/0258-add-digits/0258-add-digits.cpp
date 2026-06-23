class Solution {
public:
    int sumOfdigits(int n,int sum){
        if(n<=0)
        return sum;
        return sumOfdigits(n/10,sum+(n%10));
    }
    int addDigits(int num) {
        if (num < 10)
        return num;
    // int sum = 0;
    // int (num > 0) {
    //     sum += num % 10;
    //     num /= 10;
    // }
    int sum=sumOfdigits(num,0);
    return addDigits(sum);
    }
};