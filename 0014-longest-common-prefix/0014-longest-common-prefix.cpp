class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string prefix =str[0];

        for(int i=1;i<str.size();i++){
            int j=0;


            while(j<prefix.size() && j<str[i].size() && prefix[j]==str[i][j]){
                j++;
            }
            prefix=prefix.substr(0, j);

        }
        return prefix;
        
        
    }
};