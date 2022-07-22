class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            int m = (n-1)>>1;
            int k = (n >> 1);
            if (m == k) count ++;
            n >>= 1;
        }
        return count;
    }
};