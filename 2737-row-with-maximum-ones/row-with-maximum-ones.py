class Solution(object):
    def rowAndMaximumOnes(self, mat):
        ones_count = 0
        idx = 0
        for i, row in enumerate(mat):
            n_ones = row.count(1)
            if n_ones > ones_count:
                ones_count = n_ones
                idx = i
        return [idx, ones_count]
        