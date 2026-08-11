class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        int left=0;
        int sum=0;
        for(int right=0; right<n;right++){
            sum=sum+nums[right];

            while(sum>=target){
                int length=right-left+1;
                ans=min(ans,length);

                sum=sum-nums[left];
                left++;

            }
        }

        if(ans==INT_MAX){
            return 0;
        }

        return ans;

      
    }
};