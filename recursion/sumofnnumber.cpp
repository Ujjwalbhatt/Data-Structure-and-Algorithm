#include <iostream>
using namespace std;
int sum(int);
int main()
{
    int n, k;
    cout << "Enter the range of the series: ";
    cin >> n;

    int su = sum(n);
    cout << su;
    return 0;
}
int sum(int n)
{

    int res;
    if (n < 1)
    {
        return 1;
    }
    else
    {
         res = n + sum(n - 1);
    }
    return res;
}
/*
5
4 -> 


*/