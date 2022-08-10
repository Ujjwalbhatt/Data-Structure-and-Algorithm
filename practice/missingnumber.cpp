#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sum = 0;
    int sum2 = 0;
    int MissingNumber(vector<int> &array, int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            sum = sum + array[i];
        }
        sum2 = (n * (n + 1)) / 2;
        return (sum2 - sum);
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
