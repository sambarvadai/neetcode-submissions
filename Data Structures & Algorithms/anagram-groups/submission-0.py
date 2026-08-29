class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        myMap = {}
        for i in range(len(strs)):
            sorted_str = "".join(sorted(strs[i]))
            if sorted_str in myMap:
                myMap[sorted_str].append(strs[i])
            else:
                myMap[sorted_str] = [strs[i]]
        return list(myMap.values())
        