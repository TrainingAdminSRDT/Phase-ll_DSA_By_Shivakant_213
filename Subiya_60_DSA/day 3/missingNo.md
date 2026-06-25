class Solution {
    public int missingNumber(int[] nums) {
        //  int n = nums.length;
        //  int sum = (n*(n+1))/2;
        //  int sum1 = 0;
        //  for(int i : nums)
        //     sum1 += i;

        // return sum-sum1;
        
         int ans=0;

        for(int i = 0; i<=nums.length; i++){
            ans = ans^i;
        }
        for (int num : nums) {
            ans ^= num;
        }
        return ans;
    }
}