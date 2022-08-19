#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> a(5,1);
    vector<int> last(a);//this copies all the element of the vecto a in vector last

    //  cout<<"printing the vector a: ";
     cout<<"printing the vector last :  ";
        for(int i: last){
        cout<<i<<" ";
    } cout<<endl;
    vector<int> v;
    cout<<"size: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"Element at 2nd index: "<<v.at(2)<<endl;
    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;
    cout<<"before pop: "<<endl;
    for ( int i:v){
        cout<<i<<" ";

    }cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"before clearing the size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clearing the size: "<<v.size()<<endl;
    return 0;
} 