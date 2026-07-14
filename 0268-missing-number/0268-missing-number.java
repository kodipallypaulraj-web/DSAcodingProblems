
class Solution {
    public int missingNumber(int[] nums) {
      // Array.sort(nums);
       int sum=0;
       int n=nums.length;
       int y = (n*(n+1))/2;
       for(int i=0;i<n;i++){
        sum+=nums[i];
       } 
       return y-sum;
    }
}