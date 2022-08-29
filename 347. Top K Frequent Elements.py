import collections


class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        c=collections.Counter(nums)
        top_k=c.most_common(k)
        return [i[0] for i in top_k]
