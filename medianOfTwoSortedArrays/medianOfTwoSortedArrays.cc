#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
  public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size()+nums2.size();
        int mid1 = size/2;
        int mid2 = mid1 - (size%2==0?1:0);
        int temp, mid1num=0,mid2num=0,i=0,j=0;
        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);

        for (int k = 0 ; k < size; k++)
        {
            temp = 0;
            if( nums1[i] < nums2[j] )
            {
                temp = nums1[i];
                i++;
            }
            else
            {
                temp = nums2[j];
                j++;
            }
            if( k == mid2 )
            {
                mid2num = temp;
            }
            if( k == mid1 )
            {
                mid1num = temp;
                break;
            }
        }
        return (mid1num + mid2num) / 2.0;
    }
};

int main(int argc, char *argv[])
{
    Solution s;
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    vector<int> nums3 = {1,2};
    vector<int> nums4 = {3,4};

    cout << s.findMedianSortedArrays(nums1, nums2) << endl;
    cout << s.findMedianSortedArrays(nums3, nums4) << endl;
    return 0;
}
