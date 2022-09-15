#include<iostream>
using namespace std;
int binarysearch(int *arr,int end,int key){
 int start = 0;
 int mid=start+(end-start)/2;
 while (start<=end)
 {
    if(arr[mid]==key)
    {
        return mid;
    }
    if(key>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
    
 }
         return -1;
}
int main()
{
    int arr[7]={1,6,45,67,89,90,177};
    int element = 45;
    int index=binarysearch(arr,7,element);
    cout<<"Index of " <<element<< " is "<<index<<endl;
    return 0;
}