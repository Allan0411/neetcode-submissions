class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;

        for(int i=0;i<nums.size();i++)
            hashmap[nums[i]]=i;

        for(int i=0;i<nums.size();i++){
            int goal=target-nums[i];
            if(hashmap[goal]&&hashmap[goal]!=i)
                return{i,hashmap[goal]};
        }
        
        return {};
    }
};
