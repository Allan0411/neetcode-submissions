class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        mapp={}
        visited=[]
        for step,i in enumerate(nums):
            if i not in visited:
                visited.append(i)
                mapp[i]=1;
            else:
                mapp[i]+=1
        
        num=[]
        for step,i in enumerate(visited):
                num.append((mapp[i],i))

        num.sort()
        result=[]
        for i in range(k):
            x,y=num.pop()
            result.append(y)

        return result
