class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmap;

        for(int i=0;i<nums.size();i++)
            hashmap[nums[i]]=i;

        for(int i=0;i<nums.size();i++){
         
            if(hashmap[target-nums[i]]&&hashmap[target-nums[i]]!=i)
                return{i,hashmap[target-nums[i]]};
        }
        
        return {};
    }
};
