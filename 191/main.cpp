
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0)
        {
            int digit = n%2;
            if(digit == 1 )
            {
                count = count + 1;
            }
            n= n >> 1;
        }
        return count;
    }
};