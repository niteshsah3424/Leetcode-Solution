class Solution {

private:

    bool isvowel(char ch) {
        return ch == 'a' || ch == 'e' ||
               ch == 'i' || ch == 'o' ||
               ch == 'u';
    }

public:

    int maxVowels(string s, int k) {

        int n = s.length();

        int i = 0;
        int j = 0;

        int count = 0;
        int maxV = 0;

        while(j < n) {

           
            if(isvowel(s[j])) {
                count++;
            }

            int length = j - i + 1;

            if(length == k) {

                maxV = max(maxV, count);

               
                if(isvowel(s[i])) {
                    count--;
                }

                i++;
            }

          
            j++;
        }

        return maxV;
    }
};