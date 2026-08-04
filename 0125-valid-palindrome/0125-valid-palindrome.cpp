class Solution {
public:

    bool valid(char ch)
    {
        if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9'))
        {
            return true;
        }

        return false;
    }

    char toLowerCase(char ch)
    {
        if((ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9'))
        {
            return ch;
        }

        return ch - 'A' + 'a';
    }

    bool checkPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;

        while(i < j)
        {
            if(s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

    bool isPalindrome(string s)
    {
        string temp = "";

        // Remove special characters
        for(int i = 0; i < s.length(); i++)
        {
            if(valid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        // Convert to lowercase
        for(int i = 0; i < temp.length(); i++)
        {
            temp[i] = toLowerCase(temp[i]);
        }

        return checkPalindrome(temp);
    }
};