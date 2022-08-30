class Solution:
    def reverseVowels(self, s: str) -> str:
        result=list(s)
        if len(s)==1:
            return s
        
        i=0
        j=len(s)-1
        while i<=j:
            if s[i] not in "aeiouAEIOU":
                result[i]=s[i]
                i+=1
            elif s[j] not in "aeiouAEIOU":
                result[j]=s[j]
                j-=1
            else:
                result[i]=s[j]
                result[j]=s[i]
                i+=1
                j-=1
        return "".join(result)
