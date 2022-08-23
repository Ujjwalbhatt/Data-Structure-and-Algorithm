#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n=7,sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
         sum=sum^arr[i];
    }
    cout<<sum;
    return 0;
}