#include <iostream>
using namespace std;
class Human
{
public:
    int weight = 1;
    private:
    int age;
    int height=98;

public:
    int getAge()
    {
        return this->age;
    }
    int setweight(int w)
    {
        this->weight = w;
    }
};
class Male : private Human
{
public:
    
    string color;
    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main()
{

    Male m1;
    cout<<m1.getHeight()<<endl;
    // Male object1;
    // cout << object1.age << endl ;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;
    // cout << object1.color << endl;
    // object1.setweight(84);
    // cout << object1.weight << endl;
    // object1.sleep();
    return 0;
}