#include<iostream>
using namespace std;
int gcd(int a,int b){
    if (a!=b)
    {
        if(a>b){
        return  gcd(a-b,b);
        }
        else
        return gcd(a,b-a);
    }
    return a;

}
int main()
{
    int n;
    int k;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the Second number: ";
    cin>>k;
    int g=gcd(n,k);
    cout<<"Gcd is: "<<g;
    return 0;
}