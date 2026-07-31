class Solution {
public:

    bool isPossible(vector<int>& nums, int k, int mid)
    {
        int studentCount = 1;
        int pageSum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(pageSum + nums[i] <= mid)
            {
                pageSum += nums[i];
            }
            else
            {
                studentCount++;
                pageSum = nums[i];

                if(studentCount > k)
                    return false;
            }
        }

        return true;
    }

    int splitArray(vector<int>& nums, int k)
    {
        int low = nums[0];
        int high = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            low = max(low, nums[i]);
            high += nums[i];
        }

        int ans = high;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(isPossible(nums, k, mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};