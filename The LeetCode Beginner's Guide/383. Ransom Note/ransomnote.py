class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        f = [0] * 26
        for character in magazine:
            f[ord(character) - ord("a")] += 1

        for character in ransomNote:
            if f[ord(character) - ord("a")] <= 0:
                return False
            f[ord(character) - ord("a")] -= 1
        return True
