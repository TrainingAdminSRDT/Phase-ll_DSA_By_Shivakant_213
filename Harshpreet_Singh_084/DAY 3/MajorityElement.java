class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int l=0, r=nums.length-1;
        int mid= l+(r-l)/2;
        return (nums[mid]);
    }
}