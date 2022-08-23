// swapping alternate number in an arrays
#include <iostream>
using namespace std;
void printarray(int *arr, int n)
{
   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[143];
    int n;
     int temp=0;
    cout << "Enter the range of the arrays: ";
    cin >> n;
    cout << "Enter the value of the arrays: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i+=2)
    {
        if (i + 1 < n)
        {   

           
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    
    }
    printarray(arr, n);
    return 0;
}