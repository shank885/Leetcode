class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        
        charset = set()
        for char in jewels:
            charset.add(char)
        
        jewel = 0
        for char in stones:
            if char in charset:
                jewel += 1

        return jewel