#include <iostream>
using namespace std;
void array(int arr[], int st, int l)
{
    if(st>=l){
        return;

    }
    cout<<arr[st];
    array(arr,st+1,l);
}
int main(){
    int n;
    
    cin>>n;

    int arr[n];

    cout<<"Enter the element of the arrays: ";
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   array(arr,0,n);
   return 0;

}