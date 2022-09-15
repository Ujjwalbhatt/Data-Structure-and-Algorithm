#include <iostream>
using namespace std;

// Peak Index in a Mountain Array
/*
Example 2:
Input: arr = [0,2,1,0]
Output: 1(index) of 2
*/
class Solution
{
public:
    int peakIndexInMountainArray(int *arr)
    {
        int s = 0;
        int e = sizeof(arr) / sizeof(arr[0]);

        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};
int main()
{
    Solution object1;
    int arr[4] = {0, 2, 1, 0};
    int k = object1.peakIndexInMountainArray(arr);
    cout << "Index of the peak element: " << k << endl;
    return 0;
}