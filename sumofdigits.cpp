#include<iostream>
using namespace std;
int sum(int n){
    static int ctr=0;
    int rem;
    if(n!=0){
        rem=n%10;
        ctr=ctr+rem;
        sum(n/10);
    }
    return ctr;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int su=sum(n); 
    cout<<"Sum is: "<<su;
    return 0;
}