#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int> record;
        vector<int> result;
        for( int i = 0; i < nums.size(); i++)
        {
            int numberToFind = target - nums[i];
            if(record.find(numberToFind) != record.end())
            {
                result.push_back(record[numberToFind]);
                result.push_back(i);
                return result;
            }
            record[nums[i]]=i;
        }
        return result;
    }
};

int main(int argc, char *argv[])
{
    Solution s;
    vector<int> test = {2,7,11,15};
    int target = 9;

    for(int i : s.twoSum(test, target))
        cout << i << endl;

    return 0;
}
