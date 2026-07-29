class Solution {
public:

    int pivot(vector<int>& nums)
    {
        int s = 0;
        int e = nums.size() - 1;

       
        if (nums[s] <= nums[e])
            return 0;

        while (s < e)
        {
            int mid = s + (e - s) / 2;

            if (nums[mid] >= nums[0])
                s = mid + 1;
            else
                e = mid;
        }

        return s;
    }

    int binarySearch(vector<int>& nums, int s, int e, int target)
    {
        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }

        return -1;
    }

    int search(vector<int>& nums, int target)
    {
        int n = nums.size();

        int p = pivot(nums);

        if (target >= nums[p] && target <= nums[n - 1])
            return binarySearch(nums, p, n - 1, target);
        else
            return binarySearch(nums, 0, p - 1, target);
    }
};