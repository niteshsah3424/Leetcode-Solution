class Solution {
public:

    bool checkEqual(int a[26], int b[26]) {

        for(int i = 0; i < 26; i++) {
            if(a[i] != b[i])
                return false;
        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {

        // Step 1: Count frequency of s1
        int count1[26] = {0};

        for(int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // Step 2: First window in s2
        int count2[26] = {0};

        int windowSize = s1.length();
        int i = 0;

        while(i < windowSize && i < s2.length()) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // Check first window
        if(checkEqual(count1, count2))
            return true;

        // Step 3: Slide the window
        while(i < s2.length()) {

            // Add new character
            int newIndex = s2[i] - 'a';
            count2[newIndex]++;

            // Remove old character
            int oldIndex = s2[i - windowSize] - 'a';
            count2[oldIndex]--;

            // Compare
            if(checkEqual(count1, count2))
                return true;

            i++;
        }

        return false;
    }
};