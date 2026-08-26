class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int left=0;
         int count=0;

        for(int right=0;right<n;right++){
           
            if(nums[right]!=val){
                nums[left]=nums[right];
                 left++;

            }
           
        }
        return left;
        
    }
};