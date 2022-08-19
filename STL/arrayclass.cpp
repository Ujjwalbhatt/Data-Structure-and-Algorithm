#include<iostream>
#include<array>

using namespace std;

int main()
{
    int basic [3] = {1,2,3};
    array<int,4> a={1,2,3,4};
    int size= a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd Index-> "<<a.at(2)<<endl;//tells element at sepcific index
    cout<<"Empty or not -> "<<a.empty()<<endl;// Tells if arrays is empty in bool
    cout<<"First Element --> "<<a.front()<<endl;// tells the first element of the arrays
    cout<<"Last Element --> "<<a.back()<<endl;//tells the last element of the arrays
       
    return 0;
}