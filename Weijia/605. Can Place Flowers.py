class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        p,i=0,0
        flowerbed=[0]+flowerbed+[0]
        while i < len(flowerbed)-2:
            sub=flowerbed[i:i+3]
            print(sub)
            if sub==[0,0,0]:
                p+=1
                flowerbed[i+1]=1
                i+=1    
            else:
                i+=1
        return p>=n
        
