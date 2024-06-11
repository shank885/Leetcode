class Solution:
    def reverseWords(self, s: str) -> str:
        word_list = s.split(" ")
        print(word_list)

        reverse_string = ""
        for item in word_list[::-1]:
            if len(item) > 0:
                reverse_string += item
                reverse_string += " "

        return reverse_string.strip()