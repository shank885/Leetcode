class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()

        while n != 1:
            if n in seen:
                break
            sum = 0
            seen.add(n)

            while n:
                rem = n % 10
                sum += rem * rem
                n //= 10
            n = sum

        return n == 1