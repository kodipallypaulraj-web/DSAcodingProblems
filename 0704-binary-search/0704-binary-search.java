class Solution {
    public int search(int[] nums, int target) {
       if (nums == null || nums.length == 0) return -1;

        int st = 0, end = nums.length - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2; // avoid overflow
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return -1;

    }
}