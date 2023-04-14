class Solution:
  def searchInsert(self, nums: List[int], target: int) -> int:
    low, high = 0, len(nums) - 1
    while low <= high:
      m = (low+high) // 2
      if nums[m] == target:
        return m
      elif nums[m] < target:
        low = m + 1
      elif nums[m] > target:
        high = m - 1
    return low
