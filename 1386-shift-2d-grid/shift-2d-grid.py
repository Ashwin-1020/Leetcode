class Solution(object):
    def shiftGrid(self, grid, k):
        for foo in range(k):
            for i in range(len(grid)-1):
                grid[i+1].insert(0, grid[i].pop())
            grid[0].insert(0, grid[-1].pop(-1))
        return(grid)
        