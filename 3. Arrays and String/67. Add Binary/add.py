class Solution:
    def addBinary(self, a: str, b: str) -> str:
        sum = ""
        carry = 0
        i = len(a) - 1
        j = len(b) - 1

        while i >= 0 or j >= 0 or carry:
            if i >= 0:
                carry += ord(a[i]) - ord("0")
                i -= 1
            if j >= 0:
                carry += ord(b[j]) - ord("0")
                j -= 1

            sum += str(carry % 2)
            carry = floor(carry / 2)

        sum = sum[::-1]
        return sum