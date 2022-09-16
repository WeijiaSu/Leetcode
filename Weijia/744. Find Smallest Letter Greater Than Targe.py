class Solution(object):
    def nextGreatestLetter(self, letters, target):
        if letters[-1]<=target:
            return letters[0]
        c1=0
        c2=len(letters)
        while c1<=c2:
            mid=int((c1+c2)/2)
            t=letters[mid]
            if t>target:
                c2=mid-1
            elif t<=target:
                c1=mid+1
        return letters[c1]
