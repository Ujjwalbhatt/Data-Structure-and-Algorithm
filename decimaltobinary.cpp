#include<iostream>
using namespace std;
long binary(int n){
       static long biNo=0,r,fctor = 1;

    if(n != 0)
    {
         r = n % 2;
         biNo = biNo + r * fctor;
         fctor = fctor * 10;
         binary (n / 2);//calling the function convertBinary itself recursively
    }
    return biNo;   
}
int main()
{ 
    long bin;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bin=binary(n);
    cout<<"Binary of number is: "<<bin;   
    return 0;
}