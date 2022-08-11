#include<iostream>
using namespace std;
int digit(int n){
    static int a=0;
    if (n!=0)
    {
        a++;
        digit(n/10);
    }
    return a;
}
int main()
{
    int n;
     cout<<"Enter the number: ";
     cin>>n;
     cout<<"No. of digits are: "<<digit(n);
    return 0;
}