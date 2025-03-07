class Solution(object):
    def mySqrt(self, x):
        st,end= 0, x//2+1

        while st<end:
            mid = (st+end)//2

            if(mid*mid > x):
                end= mid
            else:
                st= mid+1
        return x if x==0 or x==1 else st-1
        
