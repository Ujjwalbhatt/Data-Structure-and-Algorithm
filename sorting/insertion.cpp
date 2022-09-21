#include<iostream>
using namespace std;
void insertion( int arr[],int n){
    int arr[5]={5,4,3,2,1};
    for(int i=1;i<5;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={5,4,3,2,1};
    insertion(arr,5);
     
        return 0;
}