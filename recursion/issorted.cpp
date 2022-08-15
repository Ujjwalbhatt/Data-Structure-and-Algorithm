#include<iostream>
using namespace std;
bool issorted(int *arr, int size){
    if(size==1 || size == 0){
      return true;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        issorted(arr+1, size-1);
    }
}
int main()
{
    int arr[5]={1,2,4,4,5};
    bool a=issorted(arr,5);
    if(a){
        cout<<"Yes it is sorted array";
    }
    else{
        cout<<"not a sorted arrays";
    }
    return 0;
}