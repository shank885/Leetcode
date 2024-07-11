class Solution:
    def reverse(self, s: List[str], idx: int, n: int):
        if idx >= n//2:
            return
        
        temp = s[idx]
        s[idx] = s[n-1-idx]
        s[n-1-idx] = temp
        idx += 1
        self.reverse(s, idx, n)
    
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        n = len(s)
        idx = 0
        self.reverse(s, idx, n)

    
        