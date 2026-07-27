class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        int n = arr.size();

        for (int i = 0; i < n; i++) {

            int count1 = 0;

            // Count frequency of arr[i]
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j])
                    count1++;
            }

            // Compare with remaining distinct elements
            for (int k = i + 1; k < n; k++) {

                if (arr[i] == arr[k])
                    continue;

                int count2 = 0;

                for (int l = 0; l < n; l++) {
                    if (arr[k] == arr[l])
                        count2++;
                }

                if (count1 == count2)
                    return false;
            }
        }

        return true;
    }
};