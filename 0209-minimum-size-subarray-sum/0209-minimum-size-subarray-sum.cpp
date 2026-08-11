class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int minlen=INT_MAX;
        int left=0;
        int currentSum=0;

        for(int right=0;right<n;right++){
            currentSum+=nums[right];
            while(currentSum>=target){

                minlen=min(minlen,right-left+1);
                currentSum-=nums[left];
                left++;
            }                                                       
        }
        if(minlen==INT_MAX) minlen=0;
        return minlen;
    }
};