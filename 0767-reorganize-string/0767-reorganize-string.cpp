class Solution {
public:
    string reorganizeString(string s) {

        int freq[26] = {0};
        for(char ch : s) {
            freq[ch - 'a']++;
        }
        priority_queue<pair<int, char>> pq;

        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0) {
                pq.push({freq[i], char(i + 'a')});
            }
        }

        string ans = "";
        pair<int, char> prev = {0, '#'};

        while(!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            int count = curr.first;
            char ch = curr.second;
            ans += ch;
            count--;
            if(prev.first > 0) {
                pq.push(prev);
            }
            prev = {count, ch};
        }
        if(ans.length() == s.length()) {
            return ans;
        }

        return "";
    }
};