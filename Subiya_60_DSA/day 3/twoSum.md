class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap <Integer, Integer> tsum = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            int comp = target - nums[i];
            if(tsum.containsKey(comp))
                return new  int[] {tsum.get(comp),i};
            else 
              tsum.put(nums[i],i);
        }
        return new int[] {};
    }
}