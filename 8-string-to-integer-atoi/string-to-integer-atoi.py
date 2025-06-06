class Solution(object):
    def myAtoi(self, s):
        s = s.strip()

        if not s:
            return 0

        result = []
        sign = 1
        i = 0
        
        if s[i] in ['+','-']:
            sign = -1 if s[i] == '-' else 1
            i += 1
        
        while i < len(s) and s[i].isdigit():
            result.append(s[i])
            i += 1
        
        rNum = int("".join(result)) if result else 0
        rNum *= sign
        return max(-2 ** 31, min((2**31 - 1, rNum)))
        