class Solution:
    def firstUniqChar(self, s: str) -> int:
        hashset = [0] * 26

        for i in range(len(s)):
            hashset[ord(s[i]) - ord("a")] += 1

        for i in range(len(s)):
            if hashset[ord(s[i]) - ord("a")] == 1:
                return i
        return -1
