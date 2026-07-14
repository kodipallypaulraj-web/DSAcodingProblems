class Solution {
    public boolean isPerfectSquare(int num) {
       if (num < 0) return false;
        if (num == 0 || num == 1) return true;

        long low = 1, high = num / 2; // long to prevent overflow
        while (low <= high) {
            long mid = (low + high) / 2;
            long sq = mid * mid;

            if (sq == num) return true;
            else if (sq < num) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
}