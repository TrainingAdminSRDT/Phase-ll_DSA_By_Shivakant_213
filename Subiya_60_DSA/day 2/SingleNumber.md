class Solution {
    public int singleNumber(int[] nums) {
        // boolean[] bool = new boolean[nums.length];
        // int c = 0;
        // boolean match = false;
        // for(int i= 0; i<nums.length; i++){
        //         if(bool[i]== true)
        //              continue;

        //     for(int j = i+1; j<nums.length; j++){
        //          match = false;
        //         if(nums[i]==nums[j]){
        //           bool[i] = true;
        //           bool[j] = true;
        //           match = true;
        //           break;
        //         }
        //     }
        //     if (match == false)
        //      return nums[i]; 
        // }
        // return nums[c];
        int ans=0; 
        for(int i=0; i<nums.length; i++){
            ans ^= nums[i];  
        }
        return ans; 

    }
}