class Solution(object):
    def findDuplicates(self, nums):
        freq = {}
        duplicates = set()
        for num in nums:
            freq[num] = freq.get(num, 0) + 1
            if freq[num] > 1:
                duplicates.add(num)
        return list(duplicates)
        