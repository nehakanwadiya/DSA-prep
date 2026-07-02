class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vowels = {'a', 'e', 'i', 'o', 'u'}
        window = s[:k]
        count = 0
        for i in range(len(window)):
            if window[i] in vowels:
                count +=1 
        maximum = count

        for right in range(k, len(s)):

            left_char = s[right-k]
            right_char = s[right]

            if left_char in vowels:
                count -=1

            if right_char in vowels:
                count +=1

            maximum = max(maximum, count)

        return maximum









            

            