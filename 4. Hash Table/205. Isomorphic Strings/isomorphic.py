class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        mapS = {}
        mapT = {}

        for i in range(0, len(s)):
            charS = s[i]
            charT = t[i]

            if charS in mapS.keys():
                if mapS[charS] != charT:
                    return False

            else:
                mapS[charS] = charT

            if charT in mapT.keys():
                if mapT[charT] != charS:
                    return False
            else:
                mapT[charT] = charS

        return True