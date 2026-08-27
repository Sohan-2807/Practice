import re

class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        result = re.fullmatch(p, s)
        return result is not None