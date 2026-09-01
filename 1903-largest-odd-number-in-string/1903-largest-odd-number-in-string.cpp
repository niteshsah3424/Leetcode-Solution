class Solution {
public:
    string largestOddNumber(string s) {
        int n=s.length();
        int end=-1;
        for(int i=n-1;i>=0;i--){
            if((s[i]-'0')%2==1){
                end=i;
                break;
            }

        }
        if(end==-1){
            return "";
        }
        int start=0;
        while(start<=end && s[start]=='0'){
            start++;
        }
        return s.substr(start,end-start+1);        
    }
};