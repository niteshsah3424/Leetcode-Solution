class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string word="";

        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                word=word+s[i];

            }

            else{
                if(word!=""){
                    words.push_back(word);
                    word="";
                }
            }
        }

        if(word!=""){
            words.push_back(word);

        }

        reverse(words.begin(),words.end());

        string ans="";
        for(int i=0;i<words.size();i++){
            ans=ans+words[i];

            if(i!=words.size()-1){
                ans=ans+" ";
            }
        }
        return ans;
        
    }
};