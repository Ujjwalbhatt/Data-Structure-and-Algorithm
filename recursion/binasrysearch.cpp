#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for (int i = s; i < e; i++)
    {
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    
}
bool binary(int *arr,int s,int e,int key)
{
    cout<<endl;
    print(arr,s,e);
    cout<<endl;
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;  
    cout<<"Value of mid in arrays: "<<mid<<endl;
    if (arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]>key){
        return binary(arr,s,mid-1,key);
    }
    else{
        return binary(arr,mid+1,e,key); 
    }
}
int main()
{
    int key,n;
    cout<<"Enter the range of the arrays";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the arrays: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the element to be searched in the arrays: ";
    cin>>key;
    bool ans=binary(arr,0,n,key);
    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found ";
    }
    return 0;
}