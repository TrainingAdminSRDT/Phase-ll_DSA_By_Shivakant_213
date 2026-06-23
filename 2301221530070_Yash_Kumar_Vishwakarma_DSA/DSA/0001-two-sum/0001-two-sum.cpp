class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            int compliment = target - nums[i];
            if(m.find(compliment) != m.end()){
                result.push_back(m[compliment]);
                result.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};