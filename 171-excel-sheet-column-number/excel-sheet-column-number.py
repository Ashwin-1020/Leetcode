class Solution(object):
    def titleToNumber(self,s):
        res = 0
        val = [i for i in range(1, 27)]
        letters = list("ABCDEFGHIJKLMNOPQRSTUVWXYZ")
        d = dict(zip(letters, val))
        for ch in s:
            res = res * 26 + d[ch]
        return res
        