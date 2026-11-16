class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> hasMap;
        for(int i=0;i<nums.size();i++)
            hasMap[nums[i]]=i;

        for(int i=0;i<nums.size();i++){
            int goal=target-nums[i];
            
            if(hasMap[goal] && i!=hasMap[goal])
                return {i,hasMap[goal]};
        }
        return {};
    }
};
