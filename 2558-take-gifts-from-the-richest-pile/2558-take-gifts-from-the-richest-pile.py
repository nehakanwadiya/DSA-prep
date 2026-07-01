import math
class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        while k>0:
            largest = max(gifts)
            root = math.isqrt(largest)
            max_index = gifts.index(largest)
            gifts[max_index] = root
            k -=1

        return sum(gifts)
        