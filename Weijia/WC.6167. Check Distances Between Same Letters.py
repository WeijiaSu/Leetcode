class Solution(object):
    def checkDistances(self, s, distance):
        i=0
        dic_1={}
        while i <len(s)-1:
            if s[i] not in dic_1:
                Index_i=[i]
                j=i+1
                while j <len(s):
                    if s[j]==s[i]:
                        Index_i.append(j)
                        dic_1[s[i]]=Index_i[1]-Index_i[0]-1
                        break
                    else:
                        j=j+1
                i=i+1
            else:
                i=i+1
        dic_2=dict(zip(list("abcdefghijklmnopqrstuvwxyz"),distance))               
        return all(dic_1[k]==dic_2[k] for k in dic_1)
