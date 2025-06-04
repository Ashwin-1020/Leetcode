class Solution(object):
    def isPalindrome(self, s):
        check = "".join([char.lower() for char in s if char.isalnum()])
        return check == check[::-1]
        