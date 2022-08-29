class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        count=Counter(list(s)).most_common()
        new_s=""
        for c in count:
            new_s+=c[0]*c[1]
        return new_s
