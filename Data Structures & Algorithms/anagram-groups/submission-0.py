class Solution:
    

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result=[]
        def is_anagram(x,y):
            x=sorted(x)
            y=sorted(y)
            if x==y:
                return True
            else :
                return False

        visited=[]
        for i in strs:
            if i in visited:
                continue
            group=[]
            for j in strs:
                if is_anagram(i,j):
                    group.append(j)
                    visited.append(j)
            result.append(group)

        return result
        