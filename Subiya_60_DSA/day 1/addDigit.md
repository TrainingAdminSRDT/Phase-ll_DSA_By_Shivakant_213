class Solution {
    public int addDigits(int num) {
        // int sum=0;
        // do
        // {
        //     sum=0;
        //     while(num>0){
        //     sum = sum+(num%10);
        //     num = num/10;
        // }
        // num=sum;
        // } while (num>=10);
        // return sum;

        return num == 0? 0 :1+(num-1)%9;
    }
}