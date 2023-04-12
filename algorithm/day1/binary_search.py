class Solution:
  def search(self, nums, target: int) -> int:
    low = 0
    high = len(nums)-1

    while low <= high:
      mid = (high + low)//2
      print(f'{low}, {mid}, {high}')
      if target == nums[mid]:
        return mid
      elif target < nums[mid]:
        high = mid - 1
        print(f'{low}, {mid}, {high}')
      else:
        low = mid + 1
        print(f'{low}, {mid}, {high}')
    return -1

#test_nums = [-1,0,3,5,9,12]
#test_target = 9

test_nums = [-1,0,3,5,9,12]
test_target = 2

sol = Solution()
result = sol.search(test_nums, test_target)
print(f'solution: {result}')
