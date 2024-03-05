class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bit(n);
        for(int i = 0; i < 16; ++i) {
            // swap with bitwise
            bit[i] = bit[31 - i] ^ bit[i];
            bit[31 - i] = bit[31 - i] ^ bit[i];
            bit[i] = bit[31 - i] ^ bit[i];
        }
        return (uint32_t) bit.to_ulong();
    }
};