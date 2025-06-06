class Solution(object):
    def findDisappearedNumbers(self, nums):
        n = len(nums)
        all_nums = set(range(1, n + 1))  
        nums_set = set(nums)              
        missing = all_nums - nums_set    
        return list(missing)
        