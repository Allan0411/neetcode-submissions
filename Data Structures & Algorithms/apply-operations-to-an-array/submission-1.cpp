class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0,j=i+1;

        while(j<nums.size()){
            
            if(nums[i]==nums[j]){
                nums[i]=nums[i]*2;
                nums[j]=0;
            }

            i++;
            j++;
        }
        
        int index=0;
        for(int i: nums){
            if(i!=0)
                nums[index++]=i;
        }

        while(index<nums.size())
            nums[index++]=0;

        return nums;
    }
};
