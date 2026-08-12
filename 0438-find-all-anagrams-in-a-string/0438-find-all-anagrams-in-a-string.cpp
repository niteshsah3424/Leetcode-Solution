class Solution {
private:

    bool isfreqsame(int freq1[], int freq2[]) {

        for(int i = 0; i < 26; i++) {

            if(freq1[i] != freq2[i]) {
                return false;
            }
        }

        return true;
    }

public:

    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if(p.length() > s.length()) {
            return ans;
        }

        int freq[26] = {0};


        for(int i = 0; i < p.length(); i++) {
            freq[p[i] - 'a']++;
        }

        int windsize = p.length();

        for(int i = 0; i <= s.length() - windsize; i++) {

            int windidx = 0;
            int idx = i;

            int windfreq[26] = {0};

            while(windidx < windsize) {

                windfreq[s[idx] - 'a']++;

                windidx++;
                idx++;
            }

            if(isfreqsame(freq, windfreq)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};