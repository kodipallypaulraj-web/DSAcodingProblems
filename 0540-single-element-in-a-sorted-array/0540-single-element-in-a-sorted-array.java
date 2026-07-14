class Solution {
   public int singleNonDuplicate(int nums[]) {
        int n=nums.length;
        int max=0;
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max = nums[i];
            }
        }
        int hash[]=new int[max+1];
        for(int i=0;i<n;i++){
            hash[nums[i]]+=1;
        }
        for(int i=0;i<n;i++){
           if (hash[nums[i]]==1){
            return nums[i];
           }
        }
        return 0;
    }
}