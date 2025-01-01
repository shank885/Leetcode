class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        pick_idx = len(digits)
        push_idx = pick_idx

        if self.isMax(digits):
            digits.append(0)
            push_idx += 1

        carry = 1
        while pick_idx:
            val = digits[pick_idx - 1] + carry
            digits[push_idx - 1] = val % 10
            carry = floor(val / 10)
            push_idx -= 1
            pick_idx -= 1

        if carry:
            digits[push_idx - 1] = carry
        return digits

    def isMax(self, arr):
        for i in range(len(arr)):
            if arr[i] != 9:
                return False
        return True