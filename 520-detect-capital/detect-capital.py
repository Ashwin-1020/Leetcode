class Solution(object):
    def detectCapitalUse(self, word):
        if word==word.upper():
            return True 
        elif word==word.lower():
            return True
        elif word.istitle():
            return True
        else:
            return False
        