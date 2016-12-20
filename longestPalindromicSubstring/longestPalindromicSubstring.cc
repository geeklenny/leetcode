#include <iostream>
#include <string>

using namespace std;

class Solution {
  public:

    void GetInitSbutString(string s, int n, int &start, int& end)
    {
        while(start - 1 >= 0)
        {
            if( s.at(start - 1 ) == s.at(n) )
                start = start -1;
            else break;
        }
        while(end + 1 < s.length())
        {
            if( s.at(end+1) == s.at(n) )
                end = end+1;
            else break;
        }
    }

    int getSubstring(string s, int& start)
    {
        int tempStart = start, tempEnd = start;

        GetInitSbutString(s, start, tempStart, tempEnd);
        cout << tempStart << " " << tempEnd << endl;
        while( (tempStart - 1 >= 0 ) && (tempEnd + 1 < s.length() ) )
        {
            if( s.at(tempStart-1) == s.at(tempEnd+1))
            {
                tempStart = tempStart - 1;
                tempEnd = tempEnd + 1;
            }
            else break;
        }

        start = tempStart;
        cout << "substring : " << s.substr(start, tempEnd-tempStart+1) <<endl;
        return tempEnd-tempStart +1;
    }

    string longestPalindrome(string s) {
        int start = 0,length=0;
        for(int i =0; i < s.length(); i++)
        {
            int tempStart = i;
            int l = getSubstring(s,tempStart);
            if (length <= l)
            {
                length = l;
                start = tempStart;
            }
        }
        return s.substr(start, length);
    }
};

int main(int argc, char *argv[])
{
    Solution s;
    string temp = "babad";
    cout << s.longestPalindrome(temp) << endl;
    temp = "cbbd";
    cout << s.longestPalindrome(temp) << endl;
    temp = "aba";
    cout << s.longestPalindrome(temp) << endl;
    return 0;
}
