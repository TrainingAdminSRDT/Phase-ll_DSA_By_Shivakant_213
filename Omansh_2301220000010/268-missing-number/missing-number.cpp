class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
       
        int s = n * (n + 1) / 2;
        int a = 0;
        
        for (int n : nums) {
            a=a+n;
        }
        
        return s - a;
    } 
};