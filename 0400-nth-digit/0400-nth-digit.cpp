class Solution {
public:
    int findNthDigit(int n) {
          long long digitCount = 9;
        long long start = 1;
        int digits = 1;

        while (n > digitCount * digits) {
            n -= digitCount * digits;
            digitCount *= 10;
            start *= 10;
            digits++;
        }

        long long num = start + (n - 1) / digits;
        int index = (n - 1) % digits;

        return to_string(num)[index] - '0';
    }
};