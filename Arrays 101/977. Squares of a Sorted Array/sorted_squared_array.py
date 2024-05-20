# complexity O(n)
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        min = 100000
        min_idx = -1

        for i in range(len(nums)):
            nums[i] = abs(nums[i])

            if nums[i] < min:
                min = nums[i]
                min_idx = i

        fwd_idx = min_idx + 1
        bwd_idx = min_idx - 1
        sq_arr = []

        sq_arr.append(nums[min_idx] * nums[min_idx])

        for i in range(1, len(nums)):
            if fwd_idx > len(nums) - 1 or bwd_idx < 0:
                break

            if nums[bwd_idx] < nums[fwd_idx]:
                sq_arr.append(nums[bwd_idx] * nums[bwd_idx])
                bwd_idx -= 1
            else:
                sq_arr.append(nums[fwd_idx] * nums[fwd_idx])
                fwd_idx += 1

        while bwd_idx > -1:
            sq_arr.append(nums[bwd_idx] * nums[bwd_idx])
            bwd_idx -= 1

        while fwd_idx < len(nums):
            sq_arr.append(nums[fwd_idx] * nums[fwd_idx])
            fwd_idx += 1

        return sq_arr


# complexity O(nlog(n))
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        for idx, item in enumerate(nums):
            nums[idx] = nums[idx] * nums[idx]
        nums.sort()
        return nums
