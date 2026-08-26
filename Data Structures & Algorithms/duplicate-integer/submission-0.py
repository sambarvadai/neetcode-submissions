class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hashset=set() #Create a set

        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)
        return False