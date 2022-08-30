class Solution(object):
    def findLongestWord(self, s, dictionary):
        """
        :type s: str
        :type dictionary: List[str]
        :rtype: str
        """
        def isSub(s,s_):
            i=0
            j=0
            while i<len(s) and j<len(s_):
                if s[i]==s_[j]:
                    i+=1
                    j+=1
                else:
                    i+=1
            return j==len(s_)
        
        res=""
        for w in dictionary:
            if len(w)>len(res) or (len(w)==len(res) and w<res):
                if isSub(s,w)==True:
                    res=w
        return res
