class Solution {
    public boolean isPowerOfTwo(int n) {
    //    if(n<=0){
    //     return false;
    //    }
    //    int ans = 1;
    //    double range =  Math.pow(2,30);
    //    while(ans<n && n<=range){
    //     ans = ans *2;
    //    }
    //     if(n==ans){
    //         return true;
    //     }
    //     return false;
    for(int i=0;i<=30;i++){
        double ans = Math.pow(2,i);
        if(ans == n){
            return true;
        }
    }
    return false;
}
}