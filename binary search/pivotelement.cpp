//to find the pivot element index in a rotated sorted array
#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
       if(arr[mid]>arr[mid+1]){
           s=mid+1;
       }
         else{
              e=mid;
         }
            mid=s+(e-s)/2;

    }
    return s;
}
int main(){
    int arr[9]={5, 6, 7, 8, 9, 10, 1, 2, 3};
    int pivot=getpivot(arr,7);
    cout<<"Pivot element is "<<arr[pivot]<<endl;
    cout<<"Pivot index is "<<pivot<<endl;
    return 0;
}