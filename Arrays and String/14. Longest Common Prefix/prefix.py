class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        common_prefix = ""
        min_len = 200

        # find min length string
        for item in strs:
            min_len = min_len if min_len < len(item) else len(item)

        # if min length string is Null
        if min_len == 0:
            return common_prefix

        # check each char iteraively if it exist in all the strings
        for char_idx in range(min_len):
            for str_idx in range(1, len(strs)):
                if strs[str_idx][char_idx] != strs[0][char_idx]:
                    return common_prefix

            common_prefix += strs[0][char_idx]

        return common_prefix
