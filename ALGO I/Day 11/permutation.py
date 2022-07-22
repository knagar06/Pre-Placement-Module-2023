class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        def recursive(n, res = [], perms = []):
            if not n:
               res.append(perms[:])
            for i in range(len(n)):
                new_perm = n[:i] + n[i + 1:]
                perms.append(n[i])
                recursive(new_perm, res, perms)
                perms.pop()
            return res
        return recursive(nums)