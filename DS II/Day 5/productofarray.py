class Solution(object):
    def productExceptSelf(self, nums):
        output = [1] * len(nums)
        preprod, postprod = 1, 1
        for i in range(1, len(nums)):
            preprod *= nums[i - 1]
            output[i] = preprod
        for i in range(len(nums) - 2, -1, -1):
            postprod *= nums[i + 1]
            output[i] *= postprod
        return output