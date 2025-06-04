class Solution(object):
    def diagonalSum(self, mat):
        n   = len(mat)
        res = 0
        for i in range(n):
            res += mat[i][i] + mat[i][n-1-i]
        x = (n-1)//2
        return res - mat[x][x] if n&1 else res

        