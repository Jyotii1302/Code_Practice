class Solution(object):
    def searchRange(self, nums, target):
        def search(x):
            st, end= 0, len(nums)
            while(st<end):
                mid= (st+end)//2
                if nums[mid] < x:
                    st= mid+1
                else:
                    end = mid
            return st
        st= search(target)
        end= search(target+1)-1
        while(st<=end):
            return[st, end]
        return[-1,-1]

