class Solution:
    def search(self, nums: List[int], target: int) -> int:
        r, l = len(nums) - 1, 0
        while r >= l:
            mid = l + (r - l) // 2
            if nums[mid] == target:
                return mid
            if nums[mid] >= nums[l]:
                if target < nums[mid] and target >= nums[l]:
                    r = mid - 1
                else:
                    l = mid + 1
            else:
                if target > nums[mid] and target < nums[l]:
                    l = mid + 1
                else:
                    r = mid - 1
        return -1
