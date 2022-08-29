class Solution:

        
    def validPalindrome(self, s: str) -> bool:
        def delete(s,index1,index2):
            test_i=index1
            test_j=index2
            while test_i<=test_j:
                test_c1=s[test_i]
                test_c2=s[test_j]
                if test_c1==test_c2:
                    test_i+=1
                    test_j-=1
                else:
                    return False
            return True
        
        
        i=0
        j=len(s)-1
        mark=False
        while i<=j:
            ci=s[i]
            cj=s[j]
            if ci==cj:
                i+=1
                j-=1
            elif mark==False and s[i+1]==s[j] and s[i]==s[j-1]:
                pt1=delete(s,i+1,j)
                pt2=delete(s,i,j-1)
                if pt1 == True or pt2 ==True:
                    return True
                else:
                    return False
            elif mark==False and s[i+1]==s[j]:
                i+=1
                mark=True
            elif mark==False and s[i]==s[j-1]:
                j-=1
                mark=True
            else:
                return False
        return True
