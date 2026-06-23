class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int Expected_sum=(n*(n+1))/2;
        int currsum=0;
        for(auto x: nums){
            currsum+=x;
        }
        return Expected_sum-currsum;
    }
};