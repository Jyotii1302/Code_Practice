class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        maxCount=0
        count=0

        for num in nums:
            if num== 1:
                count += 1
            else:
                count=0
            maxCount= max(maxCount, count)
        return maxCount

        
