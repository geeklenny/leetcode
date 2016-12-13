#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hashMap(256, -1);
        int longest = 0, subStringStart = 0;
        for(int i = 0; i < s.length(); i++)
        {
            subStringStart = subStringStart >= hashMap[s[i]] + 1 ? subStringStart : hashMap[s[i]] + 1;
            hashMap[s[i]] = i;
            longest = longest >= i-subStringStart +1 ? longest : i - subStringStart + 1;
        }
        return longest;
    }

    // int lengthOfLongestSubstring(string s) {
    //     // for ASCII char sequence, use this as a hashmap
    //     vector<int> charIndex(256, -1);
    //     int longest = 0, m = 0;

    //     for (int i = 0; i < s.length(); i++) {
    //         m = max(charIndex[s[i]] + 1, m);    // automatically takes care of -1 case
    //         charIndex[s[i]] = i;
    //         longest = max(longest, i - m + 1);
    //     }

    //     return longest;
    // }
};

int main(int argc, char *argv[])
{
    string s1 = "abcabcbb";
    string s2 = "a";
    string s3 = "abc";
    string s4 = "aab";
    Solution solution;
    cout << solution.lengthOfLongestSubstring(s1) << endl;
    cout << solution.lengthOfLongestSubstring(s2) << endl;
    cout << solution.lengthOfLongestSubstring(s3) << endl;
    cout << solution.lengthOfLongestSubstring(s4) << endl;
    return 0;
}
