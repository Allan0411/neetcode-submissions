class Solution:
    def twoSum(self, nums, target):
        mp = {}  # value -> index

        for i, num in enumerate(nums):
            need = target - num
            if need in mp:
                return [mp[need], i]
            mp[num] = i

        return []
