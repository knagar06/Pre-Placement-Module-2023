class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        start, end = 0, len(nums)
        i = 0
        while i < end:
            num = nums[i]
            if num == 0 and i > start:
                nums.pop(i)
                nums.insert(0, 0)
                start += 1
            elif num == 2 and i < end:
                nums.pop(i)
                nums.append(2)
                end -= 1
            else:
                i += 1