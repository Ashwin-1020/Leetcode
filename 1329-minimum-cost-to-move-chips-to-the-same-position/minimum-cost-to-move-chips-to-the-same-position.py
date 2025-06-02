class Solution(object):
    def minCostToMoveChips(self, position):
       even = sum(p % 2 == 0 for p in position)
       odd = len(position) - even
       return min(even, odd)
        