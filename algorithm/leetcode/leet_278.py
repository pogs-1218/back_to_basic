# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
  def firstBadVersion(self, n: int) -> int:
    l = 1
    h = n 
    m = 0
    while l <= h:
      m = (l+h)//2
      if isBadVersion(m):
        h = m - 1
      else:
        l = m + 1
    return m
