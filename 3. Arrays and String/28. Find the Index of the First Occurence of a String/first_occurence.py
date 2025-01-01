class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        hay_len = len(haystack)
        ned_len = len(needle)

        # if lenth of haystack id less than needle return -1
        if hay_len < ned_len:
            return -1

        # find needle in haystack iteratively
        for i in range(hay_len - ned_len + 1):
            # if neele found return index
            if haystack[i : i + ned_len] == needle:
                return i

        # if not found return -1
        return -1
