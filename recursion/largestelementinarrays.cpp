#include<iostream>
using namespace std;
int n;
int large(int arr[]){
    static int hst=-9999,i=0;
    if (i<n)
    {
            if (hst<arr[i])
            {
                hst=arr[i];
            }
            i++;
            large(arr);
    }
    return hst;

}
int main()
{
    int hst;
    cout<<"Enter the range of the arryas: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    hst=large(arr);
    cout<<"Largest no. in the arrays is: "<<hst;
    return 0;
}