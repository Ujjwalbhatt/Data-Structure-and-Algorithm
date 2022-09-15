//to find the first and last most occurence of the given element
#include<iostream>
using namespace std;
int firstoccurence(int *arr,int n,int key){
    int s= 0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
       if(arr[mid]==key){
              ans=mid;
              e=mid-1;
       }
       else if(key>arr[mid]){
        s=mid+1;

       }
       else if(key<arr[mid]){
             e=mid-1;
       }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastoccurence(int *arr,int n,int key){
    int s= 0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
       if(arr[mid]==key){
              ans=mid;
              s=mid+1;
       }
       else if(key>arr[mid]){
        s=mid+1;

       }
       else if(key<arr[mid]){
             e=mid-1;
       }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int even[11]={1,2,3,3,3,3,3,3,3,3,5};
    int k=firstoccurence(even,11,3);
    cout<<"Index of the first most occurence: "<<k<<endl;
     int l=lastoccurence(even,11,3);
    cout<<"Index of the last most occurence: "<<l<<endl;
    int total_occurence_of_element = (l-k)+1;
    cout<<"total occurence of the digit in the arrays: "<<total_occurence_of_element;


    return 0;
}