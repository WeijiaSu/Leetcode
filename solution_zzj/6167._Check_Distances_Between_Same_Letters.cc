class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
        d = dict(zip("abcdefghijklmnopqrstuvwxyz", distance))
        temp = set()
        for i,c in enumerate(s):
            if c not in temp:
                if i+d[c]+1>len(s)-1:
                    return False
                if c!=s[i+d[c]+1]:
                    return False
            temp.add(c)
        return True
