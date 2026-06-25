class Solution {
    public boolean containsDuplicate(int[] nums) {
        // 2 loops approach --> O(n^2)
        // Sorting the array and check --> O(nlogn)
        HashMap <Integer, Integer> maps = new HashMap<>();
        for(int i: nums){
            if(maps.containsKey(i))
                return true;
            maps.put(i,1);
        }
        return false;
    }
}