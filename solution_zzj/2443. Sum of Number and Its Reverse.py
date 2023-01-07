class Solution:
    def sumOfNumberAndReverse(self, num: int) -> bool:
        if num==0:
            return True
        for i in range(num):
            if i + int(str(i)[::-1])==num:
                return True
        return False
