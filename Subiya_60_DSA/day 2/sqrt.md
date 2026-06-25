class Solution {
    public int mySqrt(int x) {

         // int ans = 1;
        // for(i = 1; i<n/2, i++){
        //     ans = i*i;
        //     if(ans == x)
        //         return i;
        // }

        if (x==0 || x==1)
            return x;
        
        int start = 1;
        int end = x;
        int mid;
        while(start <= end){
            mid = start + (end-start)/2;
            if(mid>x/mid)
             end = mid-1;
            else if (mid<x/mid)    // mid*mid<x
             start = mid +1;
             else 
             return mid;

        }
        return Math.round(end);
    }
}