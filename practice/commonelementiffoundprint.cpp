#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int arr2[10];
    int n,m;
    cin>>n>>m;
    
   
    for (int i = 0; i < n; i++)
    {
          cin>>arr[i];
    }
 
    for (int i = 0; i < m; i++)
    {
          cin>>arr2[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int element=arr[i];
        for (int j = 0; j < m; j++)
        {
            if (element==arr2[j])
            {
                cout<<element<<" ";
                arr2[j]=-11212;
                break;
            }
            
        }
        
    }
    
    return 0;
}