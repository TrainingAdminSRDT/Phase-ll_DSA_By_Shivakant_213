class Solution {
public:
    int mySqrt(int x) {
        long int start = 0 , end = x , mid = start + ( end - start )/2 , ans = 0 ;
        while(start<=end){
            mid = start + ( end - start )/2;
            if(mid*mid==x){
                ans=mid;
                return ans;
            }
            if(mid*mid>x){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};