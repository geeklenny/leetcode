#include<iostream>
#include "limits.h"

using namespace std;

class Solution {
  public:
    int reverse(int x) {
        long long result = 0;
        while(x != 0)
        {
            result = result * 10 + x % 10;
            x = x/10;
        }
        return (result > INT_MAX || result < INT_MIN) ? 0 : result ;
    }
};

int main(int argc, char *argv[])
{
    Solution s;
    cout << s.reverse(123456) << endl;
    cout << s.reverse(1000) << endl;
    cout << s.reverse(1001) << endl;
    cout << s.reverse(0) << endl;
    cout << s.reverse(-123) << endl;
    cout << s.reverse(-1234) << endl;
    cout << s.reverse(1534236469) << endl;
    cout << 9646324350+1 << endl;


    return 0;
}
