#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : public Animal
{
};
class germanShepheard: public Dog
{

};
int main()
{
    germanShepheard d;
    d.speak();
    cout<<d.age<<endl;
    return 0;
}