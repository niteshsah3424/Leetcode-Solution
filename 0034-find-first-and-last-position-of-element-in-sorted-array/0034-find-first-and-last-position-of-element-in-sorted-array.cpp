class Solution {
public:

    int firstocc(vector<int>& arr, int n, int key)
    {
        int s = 0;
        int e = n - 1;
        int ans = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (arr[mid] == key)
            {
                ans = mid;
                e = mid - 1;
            }
            else if (arr[mid] < key)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        return ans;
    }

    int lastocc(vector<int>& arr, int n, int key)
    {
        int s = 0;
        int e = n - 1;
        int ans = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (arr[mid] == key)
            {
                ans = mid;
                s = mid + 1;
            }
            else if (arr[mid] < key)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target)
    {
        int n = nums.size();

        vector<int> ans;

        ans.push_back(firstocc(nums, n, target));
        ans.push_back(lastocc(nums, n, target));

        return ans;
    }
};