// recursion code for hailstone series.
#include<iostream>
using namespace std;
int getnextvlaue(int n){
    int i=n;
    if(i%2==0){
        i=i/2;
    }
   else{
    i=3*i+1;
   }
   return i;
}
void hailstone(int n){
      int i=n;
      if(i==1){
        cout<<i;
      }
      else{
        cout<<i<<" ";
        hailstone(getnextvlaue(i));
      }
}
int counter(int n){
    int i=n;
    if (i==1){
        return 1;
    }
    else
    {
        return 1+counter(getnextvlaue(i));
    }
    
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"hailstone series of "<<n<<" is: ";
    hailstone(n);
    cout<<endl<<"Total count of numbers in series is: "<<counter(n);
    return 0;
}