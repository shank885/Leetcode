class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        ans = []
        hashmap = {}

        for i in range(len(list1)):
            for j in range(len(list2)):
                if list2[j] == list1[i]:
                    hashmap[list2[j]] = i + j

        min_val = 2000
        for key, value in hashmap.items():
            print(key, value)
            if value <= min_val:
                min_val = value

        print(min_val)

        for key, value in hashmap.items():
            if value == min_val:
                print(key, value)
                ans.append(key)

        return ans