#include <iostream>
using namespace std;
int i;
int prime(int n)
{
    if (i == 1)
    {
        return 1;
    }
    else if (n % i == 0)
    {
        return 0;
    }
    else
    {
        i = i - 1;
        prime(n);
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    i = n / 2;
    int ch = prime(n);
    if (ch == 1)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}