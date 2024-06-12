class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split(" ")
        for i, item in enumerate(words):
            words[i] = item[::-1]
        return " ".join(words)
