class Solution:
    def kthGrammar(self, n: int, k: int) -> int:
        if k == 1:
            return 0
        if k == 2:
            return 1
        return self.find(n, k, k)

    def find(self, n: int, nth: int, k: int) -> int:
        if k == 1:
            return 0
        if k == 2:
            return 1

        return_val = self.find(n-1, k, (k//2)+(k%2))
        
        if return_val == 0:
            if k%2 == 0:
                ans = 1
            else:
                ans = 0
        else:
            if k%2 == 0:
                ans = 0
            else:
                ans = 1
        return ans

